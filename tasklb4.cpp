#include<iostream>
using namespace std;
main(){

int n,d,count,last_digit;



cout<<"enter your number here : "<<endl;
cin>>n;
cout<<"enter the digit your want to check : "<<endl;
cin>>d;



for( n>0 ; n=n/10 ;)
{

last_digit=n%10;
    

if(last_digit==d){

count++;

}
    

}



cout<<"your digit "<<d<<" repeats "<< count << " times  "<<endl;
}





