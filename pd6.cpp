#include<iostream>
using namespace std;
main()
{
	int speed;
	cout<<"enter your speed here:";
	
	cin>>speed;

	if(speed<10){
	cout<<"your speed is slow"<<endl;

}
	if(speed>10){
	if(speed<=50){
	cout<<"your speed is average";

}
}
	if(speed>50){
	if(speed<150){
	cout<<"your speed is fast";
}
}
	if(speed>150){
	if(speed<1000){
	cout<<"your speed is ultra fast";
}
}
	if(speed>1100){
	cout<<"your speed is extremely fast";
}
}