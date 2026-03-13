#include<iostream>
using namespace std;
main(){
    string day;
    string month;
    float amount;
    float discount;
    float paid;

cout<<"enter the month of you purchase : ";
cin>>month;

cout<<"enter the day of your purchase :  ";
cin>>day;

cout<<"enter the amout on purchase : ";
cin>>amount;

    if(day=="sunday"  &&  month=="october"){

        discount=amount*0.1;
        paid=amount-discount;
    
        cout<<"your amount to be paid is : "<<paid<<endl;





    }


    if(day=="thursday"  &&  month=="november"){
        discount=amount*0.1;
        paid=amount-discount;


        cout<<"your amount to be paid is : "<< paid<<endl;





    }
    
    
    
    
    
    

}