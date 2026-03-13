#include<iostream>
using namespace std;

void remark(int speed);

main(){


int speed;

cout<<"enter the speed : "<<endl;
cin>>speed;

remark(speed);
}

void remark(int speed){

if(speed>100){

cout<<"Halt....YOU WILL BE CHALLENGED!!!"<<endl;

}
else if(speed<=100){

cout<<"Perfect! You are going good."<<endl;

}
}