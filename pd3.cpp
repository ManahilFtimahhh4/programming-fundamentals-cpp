#include<iostream>
using namespace std;
main(){
    string name;
    float total_marks;
    float percentage;
    
    int  sub1;
    int sub2;
    int sub3;
    int sub4;
    int sub5;

    cout<<"enter student name : ";
    cin>>name;
    

    
    cout<<"enter marks of  sub1     : ";
    cin>>sub1;

    
    
    cout<<"enter marks of  sub2     : ";
    cin>>sub2;
    
    
    cout<<"enter marks of   sub3    : ";
    cin>>sub3;

   
    
    cout<<"enter marks of   sub4    : ";
    cin>>sub4;
   
    
    cout<<"enter marks of   sub5    : ";
    cin>>sub5;

    total_marks=sub1+sub2+sub3+sub4+sub5;

    percentage=(total_marks/500)*100;

    cout<<"your total marks are : "<<total_marks<<endl;
            cout<<"your percentage is : "<<percentage<<endl;

        if(percentage>=90 && percentage<=100){

           cout<<"name : "<<name<<endl;
           
            cout<<"your grade is A+ "<<endl;

        }

        if(percentage>=80 && percentage<=90){

            cout<<"name : "<<name<<endl;
    
            cout<<"you grade is A"<<endl;

        }
        if(percentage>=70 && percentage<=80){

            cout<<"name : "<<name<<endl;
            

        cout<<"youir grade is B+ : ";


        }
            if(percentage>=60 && percentage<=70){

                cout<<"name : "<<name<<endl;
                
                cout<<"your  grade is B+ ";
            }
        
           if(percentage<=50 && percentage>=60){

            cout<<"name : "<<name<<endl;
            
                cout<<"your grade is C";
           } 

           if(percentage>=40 && percentage<=50){

            cout<<"name : "<<name<<endl;
            

            cout<<"your grade is D";
           }
else if(percentage<40){
    cout<<"you are fail";

}

   
}

        
        
    

    







