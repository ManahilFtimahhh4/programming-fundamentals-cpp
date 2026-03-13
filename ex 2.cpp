#include<iostream>
using namespace std;
main()
{

	string name;
	int sub1;
	int sub2;
	int sub3;
	int sub4;
	int sub5;
	int obt_marks;
	int percentage;
	int total;

	cout<<"enter the student name here : ";
	cin>>name;
	
	cout<<"enter sub 1 : ";
	cin>>sub1;
	
	cout<<"enter sub 2 : ";
	cin>>sub2;

	cout<<"enter sub 3 : ";
	cin>>sub3;

	cout<<"enter sub 4 : ";
	cin>>sub4;

	cout<<"enter sub 5 : ";
	cin>>sub5;

	cout<<"total marks for papers : ";
	cin>>total;

	

	if(percentage>=90 && percentage<=100){

	obt_marks=sub1+sub2+sub3+sub4+sub5;
	percentage=(obt_marks)/(total)*100;

		cout<<"your grade is A+  "<<name<<endl;
		cout<<"your percentage is"<<percentage<<endl;
		cout<<"your total score is : "<<obt_marks<<endl;
	
}
	
}
		

	