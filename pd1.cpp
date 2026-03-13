#include<iostream>
using namespace std;
main()
{
    string friut[50]={"peach","apple","guava","watermelon"};

    int price[4]={60,70,40,30};
string fru;
int pri, total_amount;

cout<<"enter the friut you want to buy : ";
cin>>fru;

cout<<"enter the number of kgs you want to buy : " ;
cin>>pri;
if(fru=="peach")
    {
        total_amount=pri*price[0];
    }
    else if(fru=="apple")
    {
        total_amount=pri*price[1];
    }

    else if(fru=="guava")
    {
        total_amount=pri*price[2];
    }

    else if(fru=="watermelon")
    {
        total_amount=pri*price[3];
    }





cout<<"total amount = "<<total_amount<<endl;





}