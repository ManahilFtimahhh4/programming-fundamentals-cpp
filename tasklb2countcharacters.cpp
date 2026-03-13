#include <iostream>
#include <fstream>
using namespace std;

int countcharacters(string filename);
int main()
{

    string filename = "mad.txt";
    int total = countcharacters(filename);
    cout << "total number of characters in file are : " << total << endl;

    
   
}
int countcharacters(string filename)
{
    fstream file;
    file.open(filename, ios::in);
    if (!file) {
        cout << "Could not open the file!" << endl;
        return 0;
}

    char ch;
    int count = 0;
    while (file.get(ch))
    {
       count++;
    }
    file.close();
    return count ;
}