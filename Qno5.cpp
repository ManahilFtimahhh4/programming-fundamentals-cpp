#include<iostream>
using namespace std;
main()
{
int n,count1=0,count2=0;
cout<<"enter the amount you want to dispatch : ";
cin>>n;

    if(n%10==0)
    {

        if(n>=1000)
        for(int i=n ; i>=1000 ; i-=1000)
        {
            count1++;
                n = n-1000;
        }
        cout<<"the number of thousand notes you dispatched are : "<<count1<<" ";

    }  
    if (n >= 500) {
        for (int j = n; j >= 500; j -= 500) {
            count2++;
            n = n - 500;
        }
            
                
        cout << "The number of 500 notes you dispatched are: " << count2 << endl;   
    

    }

        
        
    
    }

   else if(n>=500)
   {
    cout<<"two 500 notes will b dispatched"<<endl;
   
   }
   else if(n>=100)
   {

    count2=n/10;
    count2++;
    cout<<"number of 10 notes will be : "<<count2;

   }
}