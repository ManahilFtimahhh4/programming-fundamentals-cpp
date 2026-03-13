#include<iostream>
using namespace std;
 
void pass(int marks);

main()
{
int marks;
cout<<"enter your marks : "<<endl;
cin>>marks;

	pass(marks);
}


void pass(int marks){

if(marks>=50)
{
cout<<"yes you are pass   "<<endl;
}
else{
cout<<"you failed"<<endl;
}
}

