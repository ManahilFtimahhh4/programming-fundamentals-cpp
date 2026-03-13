#include<iostream>
using namespace std;

void calculatepayableamount(string day , int amount);

main(){


string day;
cout<<"enter the day of purchase : "<<endl;
cin>>day;

int amount;
cout<<"enter amount of purchase : "<<endl;
cin>>amount;

calculatepayableamount( day, amount);
}

void calculatepayableamount(string day,int amount){

if(day=="sunday"){
float discount=amount*0.1;
float final_price=amount-discount;

cout<<"your price after discount is :  "<<final_price<<endl;
}
else
{
	cout<<"no discount your price is : "<<amount<<endl;
}
}
