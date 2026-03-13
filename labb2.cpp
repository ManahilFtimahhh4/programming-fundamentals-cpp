#include<iostream>
using namespace std;

void printsum(int cars[][3],int rowsize);



int main()
{

int rowsize=3;
int cars[3][3];
cout<<"enter the rowsize :"<<endl;
cin>>rowsize;




printsum(cars,rowsize);

}

void printsum(int cars[][3],int rowsize){
int count=0;

for(int i=0 ; i<3; i++){
for(int j=0 ; j<3; j++){

cout<<"enter element at position : "<<"["<<i<<"]"<<"["<<j<<"] : ";
cin>>cars[i][j];

count=count+cars[i][j];


}
}
cout<<"sum of these is : "<<count;
}


	
