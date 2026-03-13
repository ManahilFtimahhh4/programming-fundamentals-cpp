#include<iostream>
using namespace std;
 main(){
string name;
float s1;
float s2;
float area;

	cout<<"enter the name of your geometric shape:";
	cin>>name;

	cout<<"enter side 1:";
	cin>>s1;

	cout<<"enter the side 2:";
	cin>>s2;

		if(name=="square"){
		area=s1*s2;
	cout<<"area of square is:"<<area<<endl;

}
	if(name=="rectangle"){
		area=s1*s2;

	cout<<"area of rectangle is:"<<area<<endl;
}
		if(name=="circle"){
		area=(3.14)*s1*s2;
	cout<<"area of circle is:"<<area<<endl;
}
	    
	if(name=="triangle"){
 		area=0.5*s1*s2;
		cout<<"area of triangle is:"<<area<<endl;

}
}














































