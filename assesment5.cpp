#include<iostream>
using namespace std;
main(){
int price;
int kgs;
int payable_amount;
int discount;
string fruit;
cout<<"enter the name of fruit:";
cin>>fruit;
cout<<"enter the number of kgs:";
cin>>kgs;
price=kgs*2;
if(fruit=="apple"){
discount=price*20/100;
payable_amount=price-discount;}
if(fruit=="mango"){
discount=price*15/100;
payable_amount=price-discount;}
if(fruit=="grapes"){
discount=price*10/100;
payable_amount=price-discount;}
cout<<"your actual amount is:"<<price<<endl;
cout<<"your discount is:"<<discount<<endl;
cout<<"your payable amount is:"<<payable_amount<<endl;



}
