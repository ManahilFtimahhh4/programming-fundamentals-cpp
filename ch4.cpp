#include <iostream>
using namespace std;
int main()
{
    char array[100];

    cout << "enter your string here : ";
    cin >> array;

    for (int i = 0; array[i] != '\0'; i++)
    {

        if (array[i] >= 'a' && array[i] <= 'y')
        {
            array[i] = array[i] + 1;
        }

        else if (array[i] == 'a')
        {
            array[i] = 'b';
        }
        else if (array[i] == 'p')
        {
            array[i] = 'q';
        }

        else if (array[i] == 'z')
        {
            array[i] = 'a';
        }
    }
    cout << "modified string is :" << array << endl;
}