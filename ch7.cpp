#include<iostream>
using namespace std;
main()
{


int arr_one[2];
int arr_two[100];




    cout<<"enter values 1 for array one : ";

    cin>>arr_one[0];

    
    cout<<"enter value 2 for array one : ";
    cin>>arr_one[1];

    int index=0;

while(true)

{
    cout<<"enter values for array two and enter 0 for ending value: ";
    cin>>arr_two[index];

if(arr_two[index]==0)
{
    break;
}
index++;
}

    cout<<"{";
    cout<<arr_one[0]<<",";
for(int i=0 ; i<index ; i++)


{
    cout<<arr_two[i]<<",";
    
}

cout<<arr_one[1]<<"}";
}