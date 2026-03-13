#include<iostream>
using namespace std;
main(){
    string day;
    float amount;
    float pay_amount;

    cout<<"enter the day of purchase : ";
    cin>>day;
    cout<<"enter the amount of purchase : ";
    cin>>amount;

    if(day=="sunday"){

        pay_amount=amount*0.1;

        cout<<"your amount to be paid after discount is : "<<pay_amount<<endl;


    }

else{

cout<<"you got no discount on purchase ....amount to paid is :  "<<amount<<endl;



}





}