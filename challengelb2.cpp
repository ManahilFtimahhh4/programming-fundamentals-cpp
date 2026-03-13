#include<iostream>
using namespace std;
main(){
int pay;
int price;
int advance;
int n13;

cout<<"ali's father pay is:";
cin>>pay;
cout<<"price of laptop is:";
cin>>price;
advance=(pay*0.5*6);
if(advance>=50000){
cout<<"yes he can buy a laptop"<<endl;
}
if(advance<50000){
cout<<"no,he cant buy a laptop"<<endl;
}
n13=(price-advance)/(pay/2); 
cout<<"he can bay a laptop if he had more bonus  upto "<<n13<<" months "<<endl;
}