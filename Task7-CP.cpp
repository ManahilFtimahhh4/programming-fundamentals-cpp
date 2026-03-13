#include <iostream>
#include <fstream>
using namespace std;

void displayWords(string fileName);

int main() {
    string file = "Task7.txt";
    displayWords(file);
    return 0;
}

void displayWords(string fileName) {
    ifstream file(fileName);
    string word;

   while (file >> word) { 
        if (word.length() < 4) {
            cout << word << endl;
        }
    }

    file.close();
}
