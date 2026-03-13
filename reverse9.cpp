#include<iostream>
using namespace std;

void words(string n1 );

int main(){

string n1;
cout<<"enter string : "<<endl;
cin>>n1;



words( n1 );
}

void words(string n1 ){

if(n1=="false")
{
	cout<<"true"<<endl;
}
if(n1=="true"){
	cout<<"false"<<endl;
}
}