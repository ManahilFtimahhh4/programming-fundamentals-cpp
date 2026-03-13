#include<iostream>
using namespace std;
main()
{
    double price;
    double arr[4]={0.25,0.10,0.05,0.01};
    double art[4];
    int add;

    cout<<"enter quaters you have : ";
    cin>>art[0];
    cout<<"enter value of dime : ";
    cin>>art[1];
    cout<<"enter value of nickle : ";
    cin>>art[2];
    cout<<"enter value  of penny : "<<endl;
    cin>>art[3];

    cout<<"enter the price of item you want to buy : "<<endl;

    cin>>price;

    cout<<arr[0]*art[0]<<endl;
    cout<<arr[1]*art[1]<<endl;
    cout<<arr[2]*art[2]<<endl;
    cout<<arr[3]*art[3]<<endl;

        add=(arr[0]*art[0])+(arr[1]*art[1])+(arr[2]*art[2])+(arr[3]*art[3]);

        if(add>=price)
        {

            cout<<"{["<<art[0]<<","<<art[1]<<","<<art[2]<<","<<art[3]<<"]"<<price<<"}"<<" TRUE    "<<endl;

        }

        else if(add<price)
        {
            cout<<"{["<<art[0]<<","<<art[1]<<","<<art[2]<<","<<art[3]<<"]"<<price<<"}"<<" FALSE    "<<endl;

        }

        }




