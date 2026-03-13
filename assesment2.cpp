#include<iostream>
using namespace std;
main(){
int price,discount,payable_amount;
cin>>price;
cout<<"enter your price here:";
   if(price==500){
discount=500*5/100;
payable_amount=price-discount;
cout<<"your amount to be paid is:"<<payable_amount<<endl;}
   if(price!=500){
cout<<"you got no discount"<<price<<endl;}
}
