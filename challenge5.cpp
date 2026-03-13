#include<iostream>
using namespace std;
main()
{

	string name1;
	cout<<"enter the name of first brother : "<<endl;
	cin>>name1;

	int age1;
	cout<<"enter age of first brother : "<<endl;
	cin>>age1;


	string name2;
	cout<<"enter the name of second brother : "<<endl;
	cin>>name2;

	int age2;
	cout<<"enter age of second brother : "<<endl;
	cin>>age2;


	string name3;
	cout<<"enter name of third brother : "<<endl;
	cin>>name3;

	int age3;
	cout<<"enter the age of third brother : "<<endl;
	cin>>age3;

	
	if(age1<age2 && age1<age3){
	cout<<"brother"<< name1 <<" is younger: "<<endl;
}

	if(age2<age3 && age2<age1){
	cout<<"borther"<< name2 << " is younger : "<<endl;
}


	   if(age3<age1 && age3<age2){
	     

	cout<<"brother"<< name3 << " is younger: "<<endl;
}

}



		
	