#include<iostream>
using namespace std;
main(){

string st1_name,st2_name;
float st1_matric,st1_fsc,st2_matric,st2_fsc,st1_ecat,st2_ecat;
int option;
float merit1,merit2;

cout<<"******************************************************************"<<endl;
cout<<"*                  UNIVERSITY MANAGEMENT SYSTEM                  * "<<endl;
cout<<"*******************************************************************"<<endl;
cout<<"  main menu "<<endl;
cout<<" 1- add new student : "<<endl;
cout<<" 2- veiw all students : "<<endl;
cout<<" 3- print the record in merit order : "<<endl;
cout<<" 4- EXIT "<<endl;
cout<<"your option : "<<endl;
cin>>option;
    if(option == 1){
        cout<<"enter student name ------------"<<endl;
    cin>>st1_name;

        cout<<"enter matric marks: "<<endl;
        cin>>st1_matric;
        cout<<"enter student FSC marks: "<<endl;
        cin>>st1_fsc;
        cout<<"enter student ecat marks: "<<endl;
        cin>>st1_ecat;
    }
        if(option == 2){
            cout<<"you do not have any record yet ! "<<endl;
        }
        if(option == 3){

            cout<<"you do not have any record yet ! "<<endl;

        }
        if(option == 4){

            cout<<"EXIT "<<endl;

        }

        
 cout<<"******************************************************************"<<endl;
cout<<"*                  UNIVERSITY MANAGEMENT SYSTEM                  * "<<endl;
cout<<"*******************************************************************"<<endl;
cout<<"  main menu "<<endl;
cout<<" 1- add new student : "<<endl;
cout<<" 2- veiw all students : "<<endl;
cout<<" 3- print the record in merit order : "<<endl;
cout<<" 4- EXIT "<<endl;
cout<<"your option : ";
cin>>option;
    if(option == 1){
        cout<<"enter student name ------------"<<endl;
    cin>>st2_name;

        cout<<"enter matric marks: "<<endl;
        cin>>st2_matric;
        cout<<"enter student FSC marks: "<<endl;
        cin>>st2_fsc;
        cout<<"enter student ecat marks: "<<endl;
        cin>>st2_ecat;
    }
        if(option == 2){
            cout<<st1_name<<"\t"<<st1_matric<<"\t"<<st1_fsc<<"\t"<<st1_ecat<<endl;
        }
        if(option == 3){

            cout<<"you do not have any record yet ! "<<endl;

        }
        if(option == 4){

            cout<<"EXIST"<<endl;

        }



        cout<<"******************************************************************"<<endl;
        cout<<"*                  UNIVERSITY MANAGEMENT SYSTEM                  * "<<endl;
        cout<<"*******************************************************************"<<endl;
        cout<<"  main menu "<<endl;
        cout<<" 1- add new student : "<<endl;
        cout<<" 2- veiw all students : "<<endl;
        cout<<" 3- print the record in merit order : "<<endl;
        cout<<" 4- EXIT "<<endl;
        cout<<"your option : "<<endl;
        cin>>option;
            if(option == 1){
                cout<<"you cannot enter more student records"<<endl;
            
            }
                 if(option == 2){
                    cout<<st1_name<<"\t"<<st1_matric<<"\t"<<st1_fsc<<"\t"<<st1_ecat<<endl;
                    cout<<st2_name<<"\t"<<st2_matric<<"\t"<<st2_fsc<<"\t"<<st2_ecat<<endl;


                }
 cout<<"******************************************************************"<<endl;
cout<<"*                  UNIVERSITY MANAGEMENT SYSTEM                  * "<<endl;
cout<<"*******************************************************************"<<endl;
cout<<"  main menu "<<endl;
cout<<" 1- add new student : "<<endl;
cout<<" 2- veiw all students : "<<endl;
cout<<" 3- print the record in merit order : "<<endl;
cout<<" 4- EXIT "<<endl;
cout<<"your option : "<<endl;



                 if(option == 3){
        
                     merit1= st1_matric + st1_fsc + st1_ecat * 0.8;
                     merit2= st2_matric + st2_fsc + st2_ecat * 0.8;
                }
                if(merit1 > merit2){
        
                    cout<<st1_name<<"\t"<<st1_matric<<"\t"<<st1_fsc<<"\t"<<st1_ecat<<endl;
                    cout<<st2_name<<"\t"<<st2_matric<<"\t"<<st2_fsc<<"\t"<<st2_ecat<<endl;


        
                }
        
        
            
            else{

                cout<<st2_name<<"\t"<<st2_matric<<"\t"<<st2_fsc<<"\t"<<st2_ecat<<endl;
                cout<<st1_name<<"\t"<<st1_matric<<"\t"<<st1_fsc<<"\t"<<st1_ecat<<endl;

            }

        }

        