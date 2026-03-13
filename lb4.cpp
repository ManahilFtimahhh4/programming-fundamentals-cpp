#include<iostream>
using namespace std;
main(){
    string day;
    float amount;
    float discount;
    float paid;

cout<<"enetr the of your purchase  day : ";
cin>>day;

cout<<"enter the amount of your purchase : ";
cin>>amount;

if(day=="sunday" && amount>5000){

    discount=amount*0.1;
    paid=amount-discount;
cout<<"your payable amount after discount is"<< paid<<endl;

}

else if(day!="sunday" && amount>5000){
    discount=amount*0.05;
    paid=amount-discount;


cout<<"your payable amount is : "<<paid<<endl;


}




}