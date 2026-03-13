#include<iostream>
using namespace std;


void check(int holidays);

int main()
{

int holidays;

cout<<"enter the number of holidays"<<endl;
cin>>holidays;

   check(holidays);
}

void check(int holidays){

float working_days = 365-holidays;
float time_for_game= working_days*63+holidays*127;
int diffrence = time_for_game-30000;

if(diffrence<0){
diffrence=-diffrence;
}


int hrs=diffrence/60;
int min=diffrence%60;


if(diffrence>30000){

cout<<"tom will run away "<<diffrence<<endl;
}


else if(diffrence<30000){
cout<<"tom will sleep"<<hrs<<"hrs and  "<<min<<"min"<<endl;
}

}