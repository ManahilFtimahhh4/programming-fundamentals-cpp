#include<iostream>
using namespace std;
 
void evenorodd(int number);

main()
{
int number;
cout<<"enter your number : "<<endl;
cin>>number;

	evenorodd(number);
}


void evenorodd(int number){

if(number%2==0)
{
cout<<"number "<<number<<" is even   "<<endl;
}
else{
cout<<"number "<<number<<" is odd"<<endl;
}
}