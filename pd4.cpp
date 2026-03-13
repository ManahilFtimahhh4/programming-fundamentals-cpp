#include<iostream>
using namespace std;
main()

{
  float roses;
  float tulips;
  float white_roses;
  float moneyR;
  float moneyT;
  float moneyW;
  float total;
  float discount;
  float afterdiscount;
	
	

	cout<<"enter no of rose:";
	cin>>roses;
 
moneyR=roses*2.00;

	cout<<"enter no of tulip:";
	cin>>tulips;

moneyT=tulips*4.10;
	
	cout<<"enter no of white roses:";
	cin>>white_roses;

moneyW=white_roses*2.50;

total=moneyR+moneyT+moneyW;

	cout<<"your total amount is"<<total<<endl;	
		
	if(total>200){
	 discount=(total*0.2);
	 afterdiscount=total-discount;

	cout<<"your amount after discount is:"<<afterdiscount<<endl;}
}
 
	