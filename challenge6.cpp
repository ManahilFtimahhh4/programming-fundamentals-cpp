#include<iostream>
using namespace std;
main()
{
	string tart;
	float weight;
	

	cout<<"enter your class in which you want to travel : ";
	cin>>tart;

	cout<<"enter the weight of your luggagge : ";
	cin>>weight;

	if("tart"=="business" && weight==40){
		cout<<"your price is 15000"<<endl;
}

	else if("tart"=="economy" && weight==25){
		cout<<"your price is 8000"<<endl;
}

	 else if("tart"=="business" && weight>40 ){
		cout<<"your price is 16000"<<endl;
}
	 else if("tart"=="economy" && weight<25){
		cout<<"your price is 850"<<endl;
}
 	
}









