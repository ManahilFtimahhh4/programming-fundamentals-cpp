#include<iostream>
#include<fstream>
using namespace std;
int main()
{
string name;
name="manahil_fatimah";
fstream file;
file.open("example.txt",ios::out);
file<<name;
file.close();




}