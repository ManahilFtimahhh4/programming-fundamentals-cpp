#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void printRoad();
void movePlayer(int direction);
void moveEnemyCars();
void generateEnemyCars();
void generateFuel();
void checkCollisions();

char road[30][30] = {
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
};

int playerX = 28;  // Player car position (bottom row)
int playerY = 15;
int lives = 3;
int score = 0;
bool gameRunning = true;

int main() {
    srand(time(0));  // Seed for random number generation
    
    while (gameRunning) {
        Sleep(200);  // Control game speed
        system("CLS");
        
        // Generate random elements
        if (rand() % 5 == 0) generateEnemyCars();
        if (rand() % 10 == 0) generateFuel();
        
        // Move enemy cars down
        moveEnemyCars();
        
        // Check for collisions
        checkCollisions();
        
        // Handle player input
        if (GetAsyncKeyState(VK_LEFT)) {
            movePlayer(-1);  // Move left
        }
        if (GetAsyncKeyState(VK_RIGHT)) {
            movePlayer(1);   // Move right
        }
        if (GetAsyncKeyState(VK_ESCAPE)) {
            gameRunning = false;
        }
        
        // Draw game
        printRoad();
        
        // Display game info
        cout << "Lives: " << lives << endl;
        cout << "Score: " << score << endl;
        
        // Check game over conditions
        if (lives <= 0) {
            cout << "GAME OVER!" << endl;
            gameRunning = false;
        }
        if (score >= 30) {  // Changed win condition to 30
            cout << "YOU WIN!" << endl;
            gameRunning = false;
        }
    }
    
    return 0;
}

void printRoad() {
    // Place player car
    road[playerX][playerY] = '^';
    
    for (int i = 0; i < 30; i++) {
        for (int j = 0; j < 30; j++) {
            cout << road[i][j];
        }
        cout << endl;
    }
    
    // Remove player car from array (so it doesn't interfere with other functions)
    road[playerX][playerY] = ' ';
}

void movePlayer(int direction) {
    int newY = playerY + direction;
    
    // Check boundaries
    if (newY > 0 && newY < 29) {
        playerY = newY;
    }
}

void generateEnemyCars() {
    // Place enemy cars at random positions in the top row
    int y = rand() % 28 + 1;  // Random position between 1 and 28
    if (road[1][y] == ' ') {
        road[1][y] = 'V';  // Enemy car facing down
    }
}

void generateFuel() {
    // Place fuel at random positions in the road
    int x = rand() % 28 + 1;
    int y = rand() % 28 + 1;
    if (road[x][y] == ' ') {
        road[x][y] = 'F';  // Fuel
    }
}

void moveEnemyCars() {
    // Move all enemy cars down
    for (int i = 28; i >= 0; i--) {
        for (int j = 0; j < 30; j++) {
            if (road[i][j] == 'V') {
                // Move car down
                if (i + 1 < 29) {
                    road[i][j] = ' ';
                    road[i+1][j] = 'V';
                } else {
                    // Car reached bottom - remove it
                    road[i][j] = ' ';
                }
            }
        }
    }
}

void checkCollisions() {
    // Check if player collided with enemy car
    if (road[playerX][playerY] == 'V') {
        lives--;
        road[playerX][playerY] = ' ';  // Remove enemy car
    }
    
    // Check if player collected fuel
    if (road[playerX][playerY] == 'F') {
        score++;
        road[playerX][playerY] = ' ';  // Remove fuel
        
        // Give extra life every 10 fuel collected
        if (score % 10 == 0) {
            lives++;
        }
    }
}