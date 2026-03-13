#include<iostream>
using namespace std;

void dis(float actual_price);

int main()
{

int roses,white_roses,tulips;
cout<<"enter the number of roses yoy ant to buy : "<<endl;
cin>>roses;

cout<<"enter the number of white roses you want to buy : "<<endl;
cin>>white_roses;

cout<<"enter the number of tulips youyr want to buy : "<<endl;
cin>>tulips;


float actual_price=roses*2.00+white_roses*4.10 + tulips*2.50;

dis(actual_price);
}

void dis(float actual_price){


if(actual_price>200){


float discount=actual_price*0.2;
float payable=actual_price-discount;

cout<<"actual price was : "<<actual_price<<endl;
cout<<"payable is: "<<payable<<endl;
}

else if(actual_price<=200){

cout<<"actual price will be : "<<actual_price<<endl;
}
}