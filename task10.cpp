#include <iostream>
using namespace std;

const int ROWS = 5;
const int COLS = 5;

char world[ROWS][COLS] = {
    {'-', '#', '#', '-', '#'},
    {'#', '-', '-', '#', '-'},
    {'-', '#', '-', '-', '-'},
    {'#', '-', '#', '-', '#'},
    {'#', '-', '-', '-', '-'}  // This is the ground
};

bool gravityEnabled = false;

// Function 1: Display the world
void DisplayWorld() {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLS; ++j) {
            cout << world[i][j] << ' ';
        }
        cout << endl;
    }
    cout << "---------------------" << endl;
}

// Function 2: Set gravity status
void SetGravityStatus(bool status) {
    gravityEnabled = status;
}

// Function 3: Move blocks down by "times" ticks
void TimeTick(int times) {
    if (!gravityEnabled) return;

    for (int t = 0; t < times; ++t) {
        // Go from second-last row upwards
        for (int i = ROWS - 2; i >= 0; --i) {
            for (int j = 0; j < COLS; ++j) {
                if (world[i][j] == '#' && world[i + 1][j] == '-') {
                    // Swap block down
                    world[i + 1][j] = '#';
                    world[i][j] = '-';
                }
            }
        }
    }
}

int main() {
    cout << "Initial World:" << endl;
    DisplayWorld();

    SetGravityStatus(true);
    TimeTick(1);  // Move blocks down by 1 tick
    cout << "After 1 Tick:" << endl;
    DisplayWorld();

    TimeTick(1);  // Another tick
    cout << "After 2 Ticks:" << endl;
    DisplayWorld();

    return 0;
}
