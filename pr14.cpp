#include <iostream>
using namespace std;

int main() {
    int n, d, count = 0, last_digit;

    cout << "enter your number here : " << endl;
    cin >> n;
    cout << "enter the digit you want to check : " << endl;
    cin >> d; 

    for (int i = n; i > 0; i= i /10) {
        last_digit = i% 10;
        
        if (last_digit == d) {  // Note: == for comparison

            
            count++;

        }
    }

    cout << "your digit " << d << " repeats " << count << " times" << endl;
    
    return 0;
}