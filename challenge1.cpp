#include<iostream>
using namespace std;
main(){
    string day;
    int amount;
    float discount;
    cout<<"enter the day of purchase : ";
    cin>>day;
    cout<<"enter the amount utilized : ";
    cin>>amount;

        if(day=="sunday")
         if(amount>=5000){
            discount=0.1*amount;
            cout<<"your total amount after discount is"<<amount-discount<<endl;
         }
         

}