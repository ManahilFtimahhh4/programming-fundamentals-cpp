#include<iostream>
using namespace std;
main(){

int x,count=0;


cout<<"enter your number here : ";
cin>>x;


while(x!=0){

   
count++;

x=x/10;



}
cout<<"you number of digits in this code are : "<< count;



}