#include<iostream>
using namespace std;
main()
{


 int smallest_value;
int array[10];
int i,j;
 
for( i=0 ; i<10 ;i++)
{
    cout<<"enter number here : ";
    cin>>array[i];

}
    smallest_value=array[0];

    for(int j=1 ; j<10 ; j++)
{
   
    if(array[j]<smallest_value)
    {
        smallest_value=array[j];
    }

        


}
cout<<"smallest value is : "<<smallest_value;
}