#include<iostream>
using namespace std;

int main() {
    string dance[10] = {"Shimmy", "Shake", "Pirouette", "Slide", "Box Step", "Headspin", "Dosado", "Pop", "Lock", "Arabesque"};
    int steps[10]; 

    
    for (int i = 0; i < 10; i++) {
        cout << "Enter a pin (0 to 9): ";
        cin >> steps[i]; 
        
        
        if (steps[i] >= 0 && steps[i] <= 9) {
            cout << "Dance move: " << dance[steps[i]] << endl; 
        } else {
            cout << "Invalid pin! Please enter a number between 0 and 9." << endl;
            i--; 
        }
    }

    return 0;
}
