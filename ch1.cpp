#include<iostream>
using namespace std;
main()
{

int array[10];

   
    int i;
    for(i=0; i<10 ; i++)
    {

        cout<<"enter your number : "<<endl;
        cin>>array[i];

       
    }
    for(int j=9 ; j>=0 ; j--)
    {
        cout<<array[j];

    }

    



}