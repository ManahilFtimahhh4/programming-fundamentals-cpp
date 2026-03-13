#include<iostream>
#include<fstream>
using namespace std;

int main()
{

char c;
cout<<"enter your character here : ";
cin>>c;

fstream reader;
reader.open("task2c.txt",ios::out);
reader<<c;
reader.close();



}