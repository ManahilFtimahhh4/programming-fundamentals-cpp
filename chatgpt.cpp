#include <iostream>
using namespace std;

int main() {
    int number;
    
    // Input the number
    cout << "Enter a number: ";
    cin >> number;

    // Special case for number 0
    if (number == 0) {
        cout << "zero" << endl;
        return 0;
    }

    // Process each digit and print its corresponding word
    while (number > 0) {
        int digit = number % 10;  // Get the last digit
        
        // Convert digit to word directly using if-else or switch-case
        if (digit == 0)
            cout << "zero ";
        else if (digit == 1)
            cout << "one ";
        else if (digit == 2)
            cout << "two ";
        else if (digit == 3)
            cout << "three ";
        else if (digit == 4)
            cout << "four ";
        else if (digit == 5)
            cout << "five ";
        else if (digit == 6)
            cout << "six ";
        else if (digit == 7)
            cout << "seven ";
        else if (digit == 8)
            cout << "eight ";
        else if (digit == 9)
            cout << "nine ";

        number = number / 10;  // Remove the last digit
    }

    cout << endl;  // New line after printing all words
    return 0;
}
