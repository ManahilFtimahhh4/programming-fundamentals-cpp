#include<iostream>
using namespace std;
main()
{

int n1=0,n2=1,sum;


for(int i=1 ; i<=4 ; i++)
{
  
    

for(int j=1 ; j<=3 ; j++ )
{
    sum=n1+n2;
    n1=n2;
    n2=sum;
       cout<<sum<<" "; 
    
}    



cout<<endl;

}







}