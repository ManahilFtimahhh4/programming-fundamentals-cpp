#include<iostream>
using namespace std;
main(){
    string temprature;
    string humidity;
    cout<<"enter the temprature : ";
    cin>>temprature;
    cout<<"enter humidity here : ";
    cin>>humidity;
        if(temprature=="warm" && humidity=="dry"){
            cout<<"your can play tennis";}

            if(temprature=="warm" && humidity=="humid"){
                cout<<"you can swim";}

                if(temprature=="cold" && humidity=="dry"){
                    cout<<"you can play basketball";}

                    if(temprature=="cold" && humidity=="humid"){
                        cout<<  "you sould watch tv show";
                    }
}
            
        