#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <ctime>

using namespace std;

void printRoad();
void movePlayer(int direction);
void moveEnemyCars();
void moveFuel();
void generateEnemyCars();
void generateFuel();
void checkCollisions();

char road[20][20] = {
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ','#'},
    {'#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#','#'}
};

int playerX = 18;  // Player car position (bottom row)
int playerY = 10;
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
        
        // Move elements down
        moveEnemyCars();
        moveFuel();
        
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

        cout<<"---------------------------------"<<endl;
        cout<<"*       GAME INSTRUCTIONS       *"<<endl;
        cout<<"---------------------------------"<<endl;
        cout<<"---Use left arrow key to move left---"<<endl;
        cout<<"---Use right arrow key to move right---"<<endl;
        cout<<"---F is FUEL BOXES & V are OPPOSITE CARS---"<<endl;
        cout<<"----your maximum lives are 3 and you will win if you reach maximum score of 25-----"<<endl;
        
        // Check game over conditions
        if (lives <= 0) {

            cout<<"****************"<<endl;
        cout << " OHHHOO..GAME OVER!" << endl;
            cout<<"****************"<<endl;
            gameRunning = false;
        }
        if (score >= 25) {
          cout<<"****************"<<endl;
            cout << " NOICEE..YOU WIN!" << endl;
          cout<<"****************"<<endl;
            gameRunning = false;
        }
    }
    
    return 0;
}

void printRoad() {
    // Place player car
    road[playerX][playerY] = '^';
    
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
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
    if (newY > 0 && newY < 19) {
        playerY = newY;
    }
}

void generateEnemyCars() {
    // Place enemy cars at random positions in the top row
    int y = rand() % 18 + 1;  // Random position between 1 and 18
    if (road[1][y] == ' ') {
        road[1][y] = 'V';  // Enemy car facing down
    }
}

void generateFuel() {
    // Place fuel at random positions in the top half of the road
    int x = rand() % 10 + 1;  // Top half of the road
    int y = rand() % 18 + 1;
    if (road[x][y] == ' ') {
        road[x][y] = 'F';  // Fuel
    }
}

void moveEnemyCars() {
    // Move all enemy cars down
    for (int i = 18; i >= 0; i--) {
        for (int j = 0; j < 20; j++) {
            if (road[i][j] == 'V') {
                // Move car down
                if (i + 1 < 19) {
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

void moveFuel() {
    // Move all fuel down (same logic as enemy cars)
    for (int i = 18; i >= 0; i--) {
        for (int j = 0; j < 20; j++) {
            if (road[i][j] == 'F') {
                // Move fuel down
                if (i + 1 < 19) {
                    road[i][j] = ' ';
                    road[i+1][j] = 'F';
                } else {
                    // Fuel reached bottom - remove it
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
    }
}