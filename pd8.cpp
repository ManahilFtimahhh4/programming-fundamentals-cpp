#include<iostream>
using namespace std;
main(){

float starting_h;
float startingm;
float hours;
float minutes;
float diffrence;
float exam_time;
float arrival_time;
float arrive_early;
float arrive_early2;
float arrive_early3;


    cout<<"enter the paper starting time hours : ";
    cin>>starting_h;


    cout<<"enter the number of minutes on which paper is going to start : ";
    cin>>startingm;

    cout<<"enter the hour at which student has arrived : ";
    cin>>hours;

    cout<<"enter the minutes at which student has arrived : ";
    cin>>minutes;

    exam_time=starting_h*60 + startingm;
    arrival_time=hours*60 + minutes;

arrive_early=exam_time-30;
arrive_early2=exam_time-60;
arrive_early3=exam_time-120;

    if(exam_time<arrival_time){

        diffrence= arrival_time - exam_time;

cout<<"student is late  "<<endl<<"  by "<<diffrence<<"  minutes "<<endl;

    }

     else if (exam_time>arrival_time){

        diffrence= exam_time - arrival_time;

cout<<"student has arrived earlier "<<endl<<"  by "<<diffrence<<"  minutes "<<endl;

    }


   else if(arrival_time==arrive_early){
    
cout<<"you are are time but 30 mins before exam starts "<<endl;
 }
    
    else if(arrival_time==arrive_early2){

cout<<"you arrived 1 hour earlier than exam time"<<endl;

    }
   else if(arrival_time==arrive_early3) {

cout<<"student has arrived 1:30 before exam time"<<endl;

   }

   else if(arrival_time==exam_time){

cout<<"you are exactly on exam  time"<<endl;

   }



}


