#include<iostream>
using namespace std;
main(){
    string bda;
    string password;

cout<<"who is there : ";
cin>>bda;


 if(bda=="admin"){

    cout<<"password required"<<endl;
 }
 else if(bda=="cancel"){

    cout<<"cnacelled ...pasword incorrect"<<endl;}
    


 else if(bda!="admin" && bda!="cancel"){
    cout<< "i dont know you ...password incorrect "<<endl;}

 


  if(bda=="admin"){
cout<<"enter password here : "<<endl;
cin>>password;}


 if(password =="the masters"){
   cout<<"wellcome";}
   if(password=="cancel"){


      cout<<"cancel";
   }
       else if(password!="the masters"){
      cout<<"the password is incorrect";
   }


}
 



