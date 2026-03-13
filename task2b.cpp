#include<iostream>
#include<fstream>
using namespace std;

int main()

{

float num;
cout<<"enter your decimal here : ";
cin>>num;

fstream reader;
reader.open("task2b.txt",ios::out);
reader<<num;
reader.close();






}