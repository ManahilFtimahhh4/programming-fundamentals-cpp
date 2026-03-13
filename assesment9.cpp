#include<iostream>
using namespace std;
main(){
int s1,s2,s3,s4,s5;
float percentage;
cout<<"enter s1:";
cin>>s1;
cout<<"enter s2:";
cin>>s2;
cout<<"enter s3:";
cin>>s3;
cout<<"enter s4:";
cin>>s4;
cout<<"enter s5:";
cin>>s5;
percentage=(s1+s2+s3+s4+s5)/(100)*(500);
 if(percentage>70){
cout<<"you are brilliant student"<<endl;}
 else{
cout<<"keep working hard"<<endl;}
}