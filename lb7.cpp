#include<iostream>
using namespace std;
main(){

    string day;
    string month;
    float amount;
    float discount;
    float paid;

cout<<"enter the day on which you are going to purchase : ";
cin>>day;

cout<<"enter the amount on purchase: ";
cin>>amount;

cout<<"enter the month in which you are going to purchase : ";
cin>>month;

if(day=="sunday"){
    if(month=="october" || month=="march" || month=="august"){

discount=amount*0.1;
paid=amount-discount;

        cout<<"your payable amount is: "<<paid<<endl;


}
}

    else if(day=="monday"){
        if(month=="november" || month=="december"){

            discount=amount*0.05;
            paid=amount-discount;

            cout<<"your payable amount is : "<<paid<<endl;
    }
    }

}
