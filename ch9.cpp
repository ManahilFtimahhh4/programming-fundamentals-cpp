#include<iostream>
using namespace std;
main()
{
    int size;
    char ag[10]={"something"};
    char arg[size+1];

    cout<<"enter the size of string you want to enter :  ";
    cin>>size;


    cout<<"now enter the string : ";
    cin>>arg;

    int i;
    for( i=0; ag[i] !='\0' ; i++)
    {
        cout<<ag[i];
    }
    cout<<" ";
int j;
    for( j=0 ; arg[j]!='\0' ; j++)
    {
        cout<<arg[j];
    }

    

}

