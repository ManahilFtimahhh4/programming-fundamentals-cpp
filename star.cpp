#include <iostream>
using namespace std;
main()
{
    
    

    for(  int  i = 1 ; i<=5 ;  i++ )
    { 
    

    for (int j = 1; j <= 5 - i; j++) {
        cout <<" ";

    }
        for(int k = 1 ; k<=i ; k++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    for(int l=5 ; l>=1 ; l--)
    {
        for(int m=1 ; m<=5-l ; m++)
        {
            cout<<" ";
        }
        for(int n=l; n>=1 ; n--)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
    cout<<endl;
    }
 