#include<iostream>
using namespace std;

void ticketprice(string country , int price);

int main(){

string country;
int price;
cout<<"enter the name of country : "<<endl;
cin>>country;

cout<<"enter the price of tickets in dollars : "<<endl;
cin>>price;

ticketprice(country , price);
 
}

void ticketprice(string country , int price){

	if(country=="pakistan"){

	float discount=price*0.05;
       float final_price=price-discount;
cout<<"your ticket price is "<<final_price<<" $ "<<endl;
}
	else if(country=="Ireland"){
float discount=price*0.1;
       float final_price=price-discount;

cout<<"your ticket price is "<<final_price<<" $ "<<endl;


}
	else if(country=="india"){
float discount=price*0.2;
       float final_price=price-discount;

cout<<"your ticket price is "<<final_price<<" $ "<<endl;

}
       else if(country=="england"){

float discount=price*0.3;
       float final_price=price-discount;

cout<<"your ticket price is "<<final_price<<" $ "<<endl;


}
	else if(country=="canada"){
float discount=price*0.45;
       float final_price=price-discount;

cout<<"your ticket price is "<<final_price<<" $ "<<endl;

}
}
