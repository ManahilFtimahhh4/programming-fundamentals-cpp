#include<iostream>
using namespace std;
main()
{
float salary;
float experience;
string position;
float increase;


	cout<<"enter your salary here : "<<endl;
	cin>>salary;

	cout<<"enter your experience here : "<<endl;
	cin>>experience;

	cout<<"enter employes's position : "<<endl;
	cin>>position;

	if(experience>=15 || position=="AP")
	{
		
		increase=salary+(salary*0.10);

	cout<<"your increase in salary is : "<<increase<<endl;
}

	else{

	cout<<"there is no increase in your salary"<<endl;
	}
}