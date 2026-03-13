#include<iostream>
using namespace std;
main(){

	int holidays, working_days,time_to_play,diffrence;
	int norm=30000;
	int total_days=365;
	cout<<"enter number of holidays : ";
	cin>>holidays;
	
	working_days=total_days-holidays;
	cout<<"total working days are:"<<working_days<<endl;

	time_to_play=(working_days*63)+(holidays*127);
	cout<<"time to play is:"<<time_to_play<<endl;


	diffrence=norm-time_to_play;
	cout<<"diffrence is"<<diffrence<<endl;
	int hours=diffrence/60;
	int minutes=diffrence%60;
	


	if(time_to_play>norm){
	
	cout<<"tom will run away"<<endl;
	cout<<"as diffrence is:"<<hours<<"hours"<<minutes<<"minutes"<<endl;


}
	else{
	cout<<"tom will sleep well"<<endl;
	cout<<"as diffrence is:"<<"hours"<<hours<<minutes<<"minutes"<<diffrence<<endl;
}	
}