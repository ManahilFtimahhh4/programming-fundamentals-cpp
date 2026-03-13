#include <iostream>
using namespace std;
main()
{
    int num1=2, num2, count = 0;

    cout << "enter starting number : ";
    cin >> num1;

    cout << "enter ending number : ";
    cin >> num2;

    if (num1 < num2)
    {

        for (int i = num1 = 1; i <= num2; i++)
        {
            count=0;
            for(int j=1 ; j<=i ; j++){
             
            if(i%j==0){
            count++;
        }
        }
            if(count==2)
            {
                cout<<i<<" ";
            }
        }
    
    }else{
        cout<<"you are entering values in wrong order ";
    }
}