#include <iostream>
using namespace std;
main()
{
    
    int count = 0;
    string string1, string2;
    cout << "enter string no 1 : ";
    cin >> string1;
    cout << "enter string no 2 : ";
    cin >> string2;

    for (int i = 0; string1[i] != '\0'; i++)
    {
        for (int j = 0; string2[j] != '\0'; j++)
        {
            if (string1[i] == string2[j])
            {
                
                    string2[j] = ' ';
                    count++;
                    break;
                
                
            }
        }
    }
    cout << "total : " << count;
}
