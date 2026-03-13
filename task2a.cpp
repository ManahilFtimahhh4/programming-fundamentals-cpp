#include<iostream>
#include<fstream>
using namespace std;

main()
{
int num;
cout<<"enter your number here : ";
cin>>num;


fstream reader;
reader.open("task2afile.txt",ios::out);
reader<<num;
reader.close();



}