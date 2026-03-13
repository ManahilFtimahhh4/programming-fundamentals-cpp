#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

const int width = 40;
const int height = 20;
const int maxBullets = 5;
const int maxEnemies = 10;
const int maxPackets = 3;

char screen[height][width];

int playerX = width / 2;
int score = 0;
int health = 3;
bool gameOver = false;
int shootCooldown = 0;

struct Bullet {
    int x, y;
    bool active;
} bullets[maxBullets];

struct Enemy {
    int x, y;
    bool active;
} enemies[maxEnemies];

struct EnergyPacket {
    int x, y;
    bool active;
} packets[maxPackets];

void clearBuffer() {
    for (int i = 0; i < height; ++i)
        for (int j = 0; j < width; ++j)
            screen[i][j] = ' ';
}

void render() {
    COORD coord = {0, 0};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);

    for (int i = 0; i < width + 2; i++) cout << "=";
    cout << "\n";

    for (int i = 0; i < height; i++) {
        cout << "|";
        for (int j = 0; j < width; j++) {
            cout << screen[i][j];
        }
        cout << "|\n";
    }

    for (int i = 0; i < width + 2; i++) cout << "=";
    cout << "\n";

    cout << "Score: " << score << "  Health: " << health << "\n";
    cout << "Controls: A = left, D = right, W = shoot, Q = quit\n";
}

void handleInput() {
    SHORT keyA = GetAsyncKeyState('A');
    SHORT keyD = GetAsyncKeyState('D');
    SHORT keyW = GetAsyncKeyState('W');
    SHORT keyQ = GetAsyncKeyState('Q');

    if (keyA & 0x8000) {
        if (playerX > 0) playerX--;
    }
    if (keyD & 0x8000) {
        if (playerX < width - 1) playerX++;
    }
    if ((keyW & 0x8000) && shootCooldown == 0) {
        for (int i = 0; i < maxBullets; i++) {
            if (!bullets[i].active) {
                bullets[i].x = playerX;
                bullets[i].y = height - 2;
                bullets[i].active = true;
                shootCooldown = 4;
                break;
            }
        }
    }
    if (keyQ & 0x8000) {
        gameOver = true;
    }

    if (shootCooldown > 0) shootCooldown--;
}

void updateBullets() {
    for (int i = 0; i < maxBullets; i++) {
        if (bullets[i].active) {
            bullets[i].y--;
            if (bullets[i].y < 0) {
                bullets[i].active = false;
            } else {
                screen[bullets[i].y][bullets[i].x] = '|';
            }
        }
    }
}

void updateEnemies() {
    for (int i = 0; i < maxEnemies; i++) {
        if (!enemies[i].active) {
            if (rand() % 20 == 0) {
                enemies[i].x = rand() % width;
                enemies[i].y = 0;
                enemies[i].active = true;
            }
        } else {
            enemies[i].y++;
            if (enemies[i].y == height - 1) {
                if (enemies[i].x == playerX) {
                    health--;
                    if (health <= 0) gameOver = true;
                }
                enemies[i].active = false;
            } else {
                screen[enemies[i].y][enemies[i].x] = 'E';
            }
        }
    }
}

void updatePackets() {
    for (int i = 0; i < maxPackets; i++) {
        if (!packets[i].active) {
            if (rand() % 50 == 0) {
                packets[i].x = rand() % width;
                packets[i].y = 0;
                packets[i].active = true;
            }
        } else {
            packets[i].y++;
            if (packets[i].y == height - 1) {
                if (packets[i].x == playerX) {
                    health++;
                    if (health > 5) health = 5;
                }
                packets[i].active = false;
            } else {
                screen[packets[i].y][packets[i].x] = '+';
            }
        }
    }
}

void handleCollisions() {
    for (int i = 0; i < maxBullets; i++) {
        if (!bullets[i].active) continue;
        for (int j = 0; j < maxEnemies; j++) {
            if (!enemies[j].active) continue;
            if (bullets[i].x == enemies[j].x && bullets[i].y == enemies[j].y) {
                bullets[i].active = false;
                enemies[j].active = false;
                score += 10;
            }
        }
    }
}

void placePlayer() {
    screen[height - 1][playerX] = 'P';
}

void gameLoop() {
    // Hide cursor
    HANDLE out = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO cursorInfo;
    GetConsoleCursorInfo(out, &cursorInfo);
    cursorInfo.bVisible = false;
    SetConsoleCursorInfo(out, &cursorInfo);

    while (!gameOver) {
        clearBuffer();
        handleInput();
        updateBullets();
        updateEnemies();
        updatePackets();
        handleCollisions();
        placePlayer();
        render();
        Sleep(50);  // control speed
    }

    system("cls");
    cout << "\n=== GAME OVER ===\n";
    cout << "Final Score: " << score << "\n";
}

int main() {
    srand(time(0));
    gameLoop();
    return 0;
}
