#include<iostream>
using namespace std;

int main() {
    int sum = 0;
    int num = 0; // initializing num to 0

    while (num >= 0) {
        cout << "Enter your number here: ";
        cin >> num;

        if (num >= 0) {
            sum = sum + num;
        }
    }

    cout << "Your sum is " << sum << endl;
    return 0;
}
