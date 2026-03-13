#include<iostream>
using namespace std;
main(){

string name;
int price;
int discount;
int actual;

cout<<"enter country name:";
cin>>name;
cout<<"enter ticket price in dollars: ";
cin>>price;

if(name=="ireland"){
discount=(0.05)*price;
actual=price-discount;
cout<<"your actual price is:"<<actual<<endl;
}
  else{
discount=(0.1)*price;
actual=price-discount;
cout<<"your actual amount is:"<<actual<<endl;
}
}























}
