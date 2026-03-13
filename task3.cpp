#include<iostream>
#include<fstream>
using namespace std;

int main()
{

string name;
fstream file;
file.open("task2b.txt",ios::in);
file>>name;
file.close();
cout<<"the file name is : "<<name;






}