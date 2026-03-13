#include<iostream>
using namespace std;
main(){
    string day;
    float amount;
    float discount;
    float paid;
    
cout<<"enter the day of your purchase : ";
cin>>day;
cout<<"enter the amount of purchase : ";
cin>>amount;


if(day=="sunday"){

    discount=amount*0.1;
    paid=amount-discount;

    


}

else if(day=="monday"){

discount=amount*0.08;
paid=amount-discount;


}

else if(day!="monday" || day!="sunday"){

discount=amount*0.05;
paid=amount-discount;}

cout<<"your payable amount is : "<<paid<<endl;


}
