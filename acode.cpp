#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void printGame();
void movePlayer(int direction);
void moveAsteroids();
void moveLasers();
void generateAsteroids();
void fireLaser();
void checkCollisions();

char spaceGrid[20][20] = {
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '},
    {'^',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' '}  // Player starts here
};

int playerX = 19;  // Player at bottom row
int playerY = 0;   // Starts at left
int lives = 3;
int score = 0;
bool gameRunning = true;

int main() {
    srand(time(0));  // Random seed
    
    while (gameRunning) {
        Sleep(200);  // Controls game speed
        system("cls");
        
        // Generate asteroids from the top
        if (rand() % 5 == 0) generateAsteroids();
        
        // Move asteroids down & lasers up
        moveAsteroids();
        moveLasers();
        
        // Check collisions
        checkCollisions();
        
        // Handle keyboard input
        if (GetAsyncKeyState(VK_LEFT)) movePlayer(-1);  // Move left
        if (GetAsyncKeyState(VK_RIGHT)) movePlayer(1);  // Move right
        if (GetAsyncKeyState(VK_SPACE)) fireLaser();    // Shoot laser
        if (GetAsyncKeyState(VK_ESCAPE)) gameRunning = false;  // Quit
        
        // Draw the game
        printGame();
        
        // Display game info
        cout << "Lives: " << lives << " | Score: " << score << endl;
        cout << "----------------------------" << endl;
        cout << "CONTROLS:" << endl;
        cout << "← → : Move" << endl;
        cout << "SPACE: Shoot laser (|)" << endl;
        cout << "O = Asteroids (destroy them!)" << endl;
        cout << "Destroy 30 asteroids to WIN!" << endl;
        
        // Check win/lose conditions
        if (lives <= 0) {
            cout << "****************" << endl;
            cout << "GAME OVER!" << endl;
            cout << "****************" << endl;
            gameRunning = false;
        }
        if (score >= 30) {
            cout << "****************" << endl;
            cout << "YOU WIN!" << endl;
            cout << "****************" << endl;
            gameRunning = false;
        }
    }
    return 0;
}

void printGame() {
    // Place player (^) in the grid
    spaceGrid[playerX][playerY] = '^';
    
    // Print the game grid
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            cout << spaceGrid[i][j];
        }
        cout << endl;
    }
    
    // Remove player from grid (for next update)
    spaceGrid[playerX][playerY] = ' ';
}

void movePlayer(int direction) {
    int newY = playerY + direction;
    if (newY >= 0 && newY < 20) {  // Stay inside borders
        playerY = newY;
    }
}

void generateAsteroids() {
    int y = rand() % 20;  // Random column
    if (spaceGrid[0][y] == ' ') {  // Spawn at top
        spaceGrid[0][y] = 'O';  // Asteroid
    }
}

void fireLaser() {
    if (spaceGrid[playerX - 1][playerY] == ' ') {  // Shoot upward
        spaceGrid[playerX - 1][playerY] = '|';  // Laser
    }
}

void moveAsteroids() {
    for (int i = 19; i >= 0; i--) {
        for (int j = 0; j < 20; j++) {
            if (spaceGrid[i][j] == 'O') {
                spaceGrid[i][j] = ' ';  // Clear current position
                if (i + 1 < 20) {
                    spaceGrid[i + 1][j] = 'O';  // Move down
                }
            }
        }
    }
}

void moveLasers() {
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (spaceGrid[i][j] == '|') {
                spaceGrid[i][j] = ' ';  // Clear current position
                if (i - 1 >= 0) {
                    spaceGrid[i - 1][j] = '|';  // Move up
                }
            }
        }
    }
}

void checkCollisions() {
    // Check if laser (|) hits asteroid (O)
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            if (spaceGrid[i][j] == '|' && spaceGrid[i - 1][j] == 'O') {
                score++;  // Increase score
                spaceGrid[i][j] = ' ';  // Remove laser
                spaceGrid[i - 1][j] = ' ';  // Remove asteroid
            }
        }
    }
    
    // Check if asteroid (O) hits player (^)
    if (spaceGrid[playerX][playerY] == 'O') {
        lives--;  // Lose a life
        spaceGrid[playerX][playerY] = ' ';  // Remove asteroid
    }
}