#include<iostream>
using namespace std;
main(){
int num;
float bonus;
cout<<"enter number here:";
cin>>num;

if(num==100){
bonus=5;
}
if(num>100){
bonus=(20.0/100)*100; 
}
if(num>1000){
bonus=(10.0/100)*100;
}
if(num%2==0 ){
bonus=bonus+1;
}
if(num%10==5 ){
bonus=bonus+2;
}

cout<<"bonus"<<bonus<<endl;

cout<<"updated amount:"<<num+bonus;
}

