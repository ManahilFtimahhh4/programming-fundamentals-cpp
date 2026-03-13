#include<iostream>
using namespace std;

void add(int number1,int number2);
void sub(int number1,int number2);
void mul(int number1,int number2);
void divi(int number1,int number2);


 int main(){

int number1,number2;
char op;
cout<<"enter number 1 : "<<endl;
cin>>number1;

cout<<"enter number 2 : "<<endl;
cin>>number2;

cout<<"enter the opration to be performed(+,-,*,/)";
cin>>op;

if(op=='+'){
 add( number1, number2);
}
else if(op=='-'){
 sub( number1, number2);
}
else if(op=='*'){
 mul( number1, number2);
}
else if(op=='/'){
 divi( number1, number2);
}

}

void add(int number1,int number2){
cout<<"sum : "<<number1+number2<<endl;
}
void sub(int number1,int number2){
cout<<"subtraction : "<<number1-number2<<endl;
}

void mul(int number1,int number2){
cout<<"multiplication : "<<number1*number2<<endl;
}
void divi(int number1,int number2){
cout<<"divide : "<<number1/number2<<endl;

}





