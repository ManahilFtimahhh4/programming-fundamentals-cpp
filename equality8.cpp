#include<iostream>
using namespace std;


void equality(int num1 , int num2);

int main()
{

	int num1,num2;

	cout<<"enter number 1 : "<<endl;
	cin>>num1;
	cout<<"enter number 2 : "<<endl;
	cin>>num2;

equality( num1 ,  num2);

}

 void equality(int num1 , int num2){
if(num1==num2){
cout<<"true"<<endl;
}
else{
cout<<"false"<<endl;
}
}
	