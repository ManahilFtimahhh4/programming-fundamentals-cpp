#include <iostream>
using namespace std;

bool isgoalscored(string footballfield[7]);

int main()
{
    string footballfield[7] = 
    {
        {" #           # "},
        {" #     0      # "},
        {" #          #  "},
        {" ############# "},
        {"      #        "},
        {"      #        "},
        {"      #        "},
    };

    if (isgoalscored(footballfield))
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}

bool isgoalscored(string footballfield[7])
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 16; col++)
        {
            if (footballfield[row][col] == '0')
            {
                return true;
            }
        }
    }
    return false;
}