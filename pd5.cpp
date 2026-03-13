#include<iostream>
using namespace std;
main(){
    
    float charges;
    char service;
    char time;
    float minutes;
    cout<<"enter the service you are availing ( press r for regular & p for premium : ) ";
    cin>>service;

cout<<"enter the time you are availing the service (press d for day time & n for night time  ) : ";
cin>>time;

cout<<"enter the number of minutes you utilized from service : ";
cin>>minutes;


if(service=='r' && minutes==50){
    charges=10.00;
    cout<<"your service charges are  "<<charges<<endl;
}
   else if(service=='r' && minutes>50){
        charges=0.20*minutes;
        cout<<"your charges are  "<<charges<<"$"<<endl;
    }

       else if(service=='p' && time=='d' && minutes<=75){


            cout<<"your  got  free service "<<endl;
        }

    else if(service=='p' && time=='d' && minutes>75){

    charges=0.10*minutes;
    cout<<"your service charges are : "<<charges<<"$"<<endl;
}



   else if(service=='p' && time=='n' && minutes<=100){

       cout<<"you got free service  "<<endl;


    }

      else if(service=='p' && time=='n' && minutes>100){

            charges=0.05*minutes;

            cout<<"your charges are "<<charges<<"$"<<endl;

        }


}