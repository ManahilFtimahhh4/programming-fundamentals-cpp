#include<iostream>
using namespace std;
 
void vote(int age);

main()
{
int age;
cout<<"enter your age : "<<endl;
cin>>age;

	vote(age);
}


void vote(int age){

if(age>=18)
{
cout<<"yes you are eligible   "<<endl;
}
else{
cout<<"you are not eligible"<<endl;
}
}