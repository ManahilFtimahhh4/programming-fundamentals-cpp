#include<iostream>
using namespace std;

void calculatemeasurements(float feets);




main()
{
float feets;
cout<<"enter the number of feets "<<endl;
cin>>feets;

calculatemeasurements(feets);

return 0;

} 

void calculatemeasurements(float feets){

	float inches=feets/12;

cout<<"the converted form is : "<< inches <<endl;
}
