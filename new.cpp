
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
void drawWalls();
void checkLevelCompletion();

const int GRID_SIZE = 22; // Increased size to accommodate walls
char spaceGrid[GRID_SIZE][GRID_SIZE];

int playerX = GRID_SIZE - 2;  // Player at bottom row (inside walls)
int playerY = 1;   // Starts at left (inside walls)
int lives = 3;
int score = 0;
int level = 1;
bool gameRunning = true;

void initializeGrid() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            if (i == 0 || i == GRID_SIZE - 1 || j == 0 || j == GRID_SIZE - 1) {
                spaceGrid[i][j] = '*'; // Walls
            } else {
                spaceGrid[i][j] = ' ';
            }
        }
    }
    spaceGrid[playerX][playerY] = '^'; // Initial player position
}

int main() {
    srand(time(0));  // Random seed
    initializeGrid();
    
    while (gameRunning) {
        Sleep(200 - (level * 30));  // Game gets faster with each level
        
        system("cls");
        
        // Generate asteroids from the top
        if (rand() % (6 - level) == 0) generateAsteroids(); // More asteroids as level increases
        
        // Move asteroids down & lasers up
        moveAsteroids();
        moveLasers();
        
        // Check collisions
        checkCollisions();
        
        // Check level completion
        checkLevelCompletion();
        
        // Handle keyboard input
        if (GetAsyncKeyState(VK_LEFT)) movePlayer(-1);  // Move left
        if (GetAsyncKeyState(VK_RIGHT)) movePlayer(1);  // Move right
        if (GetAsyncKeyState(VK_SPACE)) fireLaser();    // Shoot laser
        if (GetAsyncKeyState(VK_ESCAPE)) gameRunning = false;  // Quit
        
        // Draw the game
        printGame();
        
        // Display game info
        cout << "Lives: " << lives << " | Score: " << score << " | Level: " << level << endl;
        cout << "----------------------------" << endl;
        cout << "CONTROLS:" << endl;
        cout << "← → : Move" << endl;
        cout << "SPACE: Shoot laser (|)" << endl;
        cout << "O = Asteroids (destroy them!)" << endl;
        cout << "Level 1: 10 points | Level 2: 15 points | Level 3: 20 points" << endl;
        
        // Check lose condition
        if (lives <= 0) {
            cout << "****************" << endl;
            cout << "GAME OVER!" << endl;
            cout << "****************" << endl;
            gameRunning = false;
        }
        // Win condition is now handled by level completion
    }
    return 0;
}

void printGame() {
    // Place player (^) in the grid
    spaceGrid[playerX][playerY] = '^';
    
    // Print the game grid with walls
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 0; j < GRID_SIZE; j++) {
            cout << spaceGrid[i][j];
        }
        cout << endl;
    }
    
    // Remove player from grid (for next update)
    if (spaceGrid[playerX][playerY] == '^') {
        spaceGrid[playerX][playerY] = ' ';
    }
}

void movePlayer(int direction) {
    int newY = playerY + direction;
    // Check if new position is within walls and not a wall itself
    if (newY > 0 && newY < GRID_SIZE - 1) {
        playerY = newY;
    }
}

void generateAsteroids() {
    int y = 1 + rand() % (GRID_SIZE - 2);  // Random column between walls
    if (spaceGrid[1][y] == ' ') {  // Spawn just below top wall
        spaceGrid[1][y] = 'O';  // Asteroid
    }
}

void fireLaser() {
    if (spaceGrid[playerX - 1][playerY] == ' ') {  // Shoot upward
        spaceGrid[playerX - 1][playerY] = '|';  // Laser
    }
}

void moveAsteroids() {
    for (int i = GRID_SIZE - 2; i >= 0; i--) {
        for (int j = 1; j < GRID_SIZE - 1; j++) {
            if (spaceGrid[i][j] == 'O') {
                spaceGrid[i][j] = ' ';  // Clear current position
                if (i + 1 < GRID_SIZE - 1) {
                    spaceGrid[i + 1][j] = 'O';  // Move down (but not into bottom wall)
                } else {
                    // Asteroid hit bottom wall - remove it
                    spaceGrid[i][j] = ' ';
                }
            }
        }
    }
}

void moveLasers() {
    for (int i = 0; i < GRID_SIZE; i++) {
        for (int j = 1; j < GRID_SIZE - 1; j++) {
            if (spaceGrid[i][j] == '|') {
                spaceGrid[i][j] = ' ';  // Clear current position
                if (i - 1 > 0) { // Don't let lasers hit top wall
                    spaceGrid[i - 1][j] = '|';  // Move up
                }
            }
        }
    }
}

void checkCollisions() {
    // Check if laser (|) hits asteroid (O)
    for (int i = 1; i < GRID_SIZE - 1; i++) {
        for (int j = 1; j < GRID_SIZE - 1; j++) {
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

void checkLevelCompletion() {
    if (level == 1 && score >= 10) {
        level++;
        cout << "****************" << endl;
        cout << "LEVEL 1 COMPLETE!" << endl;
        cout << "****************" << endl;
        Sleep(2000); // Pause to show level completion
    } else if (level == 2 && score >= 15) {
        level++;
        cout << "****************" << endl;
        cout << "LEVEL 2 COMPLETE!" << endl;
        cout << "****************" << endl;
        Sleep(2000); // Pause to show level completion
    } else if (level == 3 && score >= 20) {
        cout << "****************" << endl;
        cout << "YOU WIN! ALL LEVELS COMPLETED!" << endl;
        cout << "****************" << endl;
        gameRunning = false;
    }
}