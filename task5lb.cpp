#include<iostream>
using namespace std;
main(){

int n,count,add,d,e,sum=0;


cout<<"enter your number here : ";
cin>>n;


for(; n>0 ; n = n / 10)
{

    
    d=n%10;

    sum=d+sum;

}


cout<<"your sum is :"<<sum<<endl;



}