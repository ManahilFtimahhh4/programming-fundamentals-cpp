#include<iostream>
using namespace std;
main(){
    int n,m,o,p,q;
   cout<<"enter the amount: ";
   int a;
   cin>>a;
   if(a % 10!=0)
   cout<<"amount must be divisible by 10";
   
    n=a/1000;
    a=a%1000;
   
   
    m=a/500;
    a=a%500;
   
  
    o=a/100;
    a=a%100;
   
   
    p=a/50;
    a=a%50;
   
  
    q=a/10;
    a=a%10;
   
   cout<<"1000:"<<n<<endl;
   cout<<"500: "<<m<<endl;
   cout<<"100: "<<o<<endl;
   cout<<"50: "<<p<<endl;
   cout<<"10: "<<q<<endl;

     
}