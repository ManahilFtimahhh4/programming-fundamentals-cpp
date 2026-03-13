#include<iostream>
using namespace std;
main(){

    char gender;
    int age;


cout<<"enter the gender of person press f for female and m for male : ";
cin>>gender;

cout<<"enter age of person : ";
cin>>age;

if(gender=='m' && age>=16){

cout<<"person's title is MR"<<endl;




}

 else if(gender=='f' && age>=16){

cout<<"the person's title is MS"<<endl;


}

else if(gender=='m' && age<16)
{

    
    cout<<"the person's title is MISTER"<<endl;

}

else if(gender=='f' && age<16)

cout<<"the person's title is MISS"<<endl;
}