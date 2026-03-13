#include<iostream>
using namespace std;
main(){
string day;
float amount;
float pay_amount;
float discount;
cout<<"enter the day your purchase : ";
cin>>day;
cout<<"enter the amount of your purchase : ";
cin>>amount;

if(day=="sunday"){
    if(amount>5000)

        discount=amount*0.1;
    pay_amount=amount-discount;
}

    else if(amount<5000){




        cout<<"you got no discount your payable amount is"<< amount<<endl;}

cout<<"your payable amount  is"<< pay_amount<<endl;


    






}