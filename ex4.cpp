#include<iostream>
using namespace std;
main()
{

int number[]={19,23,34,34,34,34};
int average,sum=0;

cout<<"enter nunmber";


for(int i=0; i<6 ;i++)

{
    cout<<number[i]<<"  "<<endl;;
    sum=sum+number[i];

}

cout<<"sum is"<<sum<<endl;
average=sum/6;
cout<<"average is "<<average<<endl;




}



