#include<iostream>
using namespace std;

void howmanystickers(float n);

main()
{
	float n;
	cout<<"enter the sides of cube : "<<endl;
	cin>>n;


	howmanystickers(n);
}



void howmanystickers(float n){


float stickers;
stickers=n*n*6;
cout<<"number of stickers needed are :"<<stickers<<endl;
}
