#include<iostream>
using namespace std;
main()
{

    int age , sum=0 , even_age , money_by_even_age , toy_price , machine_price ,
    tmoney_by_toys ,total_money_saved ,odd_age;

    cout<<"enter lilli's age here :  ";
    cin>>age;

    cout<<"enter the price of toy : ";
    cin>>toy_price;


    cout<<"enter washing  machine price";
    cin>>machine_price;


    for(int i = 0 ; i<age ; i++){

        sum=sum+1;

        
    

        even_age = i/2;
        odd_age=i-even_age;

    }

           money_by_even_age =(even_age*10)-1;
 
            tmoney_by_toys=toy_price*odd_age;

        total_money_saved= money_by_even_age+tmoney_by_toys;


        if(total_money_saved>=machine_price)
        {

            cout<<"yes lilli can buy washing machine as she have "<< total_money_saved<<endl;
        }
        else if(total_money_saved<machine_price)
        {

            cout<<"lilli cannot buy washing machine as she have  "<<total_money_saved<<endl;
        }
        



        


















}