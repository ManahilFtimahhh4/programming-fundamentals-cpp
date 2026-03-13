#include<iostream>
using namespace std;


void calculatefuel(float distance);

 int main(){

	float distance;
	cout<<"enter the distance here : "<<endl;
	cin>>distance;

	calculatefuel(distance);

	return 0;


}
	
	void calculatefuel(float distance){
	float fuel=distance*10;
if(fuel>100){
cout<<"fuel needed : "<< fuel <<" to cover distance "<<endl;
}
else if(fuel<=100){

cout<<"fuel needed : 100"<<endl;	
}
}