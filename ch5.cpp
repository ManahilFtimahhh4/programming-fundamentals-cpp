#include<iostream>
using namespace std;
main()
{
int count=0;
char array[5]={'a','e','i','o','u'};
char arr[100];
cout<<"enter your sring here : ";
cin>>arr;

    for(int i=0 ; arr[i]!=0 ;i++)
    {


        for(int j=0 ; j<5 ;j++)
       {
         if(arr[i]==array[j])
        {
            count++;
        }
    }
    
    }
cout<<count;
    
 


}