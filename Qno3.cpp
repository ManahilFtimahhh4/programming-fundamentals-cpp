#include <iostream>
using namespace std;
main()
{

    int n,d,count=1;
    cout<<"enter the power of number two";
    cin>>n;
   for ( int i=0 ; i<=n; i++)
   {

    d=i%2;
   if(d==0)

cout<<count<< " ";
count=count*2;
}   
}