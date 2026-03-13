#include<iostream>
using namespace std;
main(){

int n;
cout<<"enter your number of which fibonacci is to be formed : "<<endl;
cin>>n;
int n1=0,n2=1,next;
cout<<n1<<","<<n2<<",";
for(int i=0 ; i<n-2 ; i++)
{

next=n1+n2;
n1=n2;
n2=next;
cout<<next<<",";





}








}