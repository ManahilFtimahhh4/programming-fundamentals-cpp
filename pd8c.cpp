#include <iostream>
using namespace std;
main()
{
     int size , time = 0;
     cout<<"enter the number of collors";
     cin>>size;
    string color[size];
    for(int i = 0 ; i < size ; i++)
    {
        cout<<"enter the colors : ";
        cin>>color[i];
        time = time + 2;
    }
    for(int i = 0 ; i < size-1 ; i++)
    {
       
        if (color[i] != color[i+1])
        {
            time = time + 1;

        }

    }
    
    cout<<"time : "<<time;
}