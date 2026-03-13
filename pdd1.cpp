#include<iostream>
using namespace std;
main()
{
     int count=0;
     int ccount;

    char word[20];

cout<<"enter your string here : ";

 cin>>word;


for(int i = 0 ; word[i]!='\0' ; i++)
{
count++;


}

    if(count%2==0)
    {
        cout<<"true"<<endl;

    }

    else if(count%2!=0)
{
    cout<<"false"<<endl;
}









}