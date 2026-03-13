#include<iostream>
using namespace std;
main()
{

string movie[5]={"gladiator","starwars","terminators","takinglives","tombriders"};
double ticket_price;
 double discount;
string user_movie;

    cout<<"enter the name of movie : ";
    cin>>user_movie;

    if(user_movie==movie[0] || user_movie==movie[2] || user_movie==movie[4]  )
    {
        discount=500*0.1;
        ticket_price=500-discount;

    }
    else if(user_movie==movie[1] ||  user_movie==movie[3] )
    {
        discount=500*0.05;
        ticket_price=500-discount;
    }

cout<<"actual price after discount is : "<<ticket_price<<endl;











}