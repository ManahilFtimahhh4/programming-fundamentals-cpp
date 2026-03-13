#include <iostream>
using namespace std;
main()
{
  cout<<"Enter a number..";
  int num , temp , digit , frequency=0;
  cin>>num;
  cout<<"Enter the digit to check..";
  cin>>digit;
  while(num>0)
  {
   temp=num%10;
   if(temp==digit)
   {
      frequency++;
   }
   num=num/10;
  }
  cout<<"frequency of  "<<digit<<" is "<<frequency;
}