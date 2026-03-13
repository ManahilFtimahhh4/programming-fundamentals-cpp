#include<iostream>
using namespace std;
main()
{


string ag ;

   

    cout<<"enter your string here : ";
    cin>>ag;

    for(int i=0 ; ag[i]!='\0' ; i++ )
    {

        if(ag[i]== 'a' || ag[i]== 'e'||ag[i]== 'i'||ag[i]== 'o'||ag[i]== 'u')
        {
            continue;
        }

cout<<ag[i];
    }


}