#include<iostream>
using namespace std;

void yourname(string name);

main()
{
	string name;
	

	cout<<"enter your name here : "<<endl;
	cin>>name;

	while(true){
	 yourname( name);

	}
}

void yourname(string name){

cout<<name<<endl;
}
