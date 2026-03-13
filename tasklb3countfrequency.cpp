#include <iostream>
#include <fstream>
using namespace std;

int frequencychecker(string filename);
int main()
{

    string filename = "mad.txt";
    int total = frequencychecker(filename);
    cout << "the frequency of following character is : " << total;
}
int frequencychecker(string filename)
{

    fstream file;
    file.open(filename, ios::in);
    if (!file)
    {
        cout << "Could not open the file!" << endl;
        return 0;
    }
    char ch;
    int count = 0;
    int count2 = 0;
    while (file.get(ch))
    {
        count++;

        if (ch == 's' || ch == 'S')
        {

            count2++;
        }
    }
    file.close();
    return count2;
}
