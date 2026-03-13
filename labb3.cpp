#include<iostream>
using namespace std;

void printmatrix(int cars[][3],int rowsize);



int main()
{

int cars[3][3];

int rowsize=3;


printmatrix(cars,rowsize);

}

void printmatrix(int cars[][3],int rowsize){

for(int i=0 ; i<3; i++){
for(int j=0 ; j<3; j++){

cout<<"enter element at position : "<<"["<<i<<"]"<<"["<<j<<"] : ";
cin>>cars[i][j];



}
}
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << cars[i][j] << "\t";

if(cars[i][j]==cars[0][0] && cars[i][j]==cars[1][1] && cars[i][j]==cars[2][2] ){
cout<<"your matrix is identity matrix.."<<endl;

}
else{

cout<<"your matrix is not identity matrix..."<<endl;

}


}
cout<<endl;
}
cout<<endl;

for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << cars[i][j] << "\t";

if(cars[i][j]==cars[0][0] && cars[i][j]==cars[1][1] && cars[i][j]==cars[2][2] ){
cout<<"your matrix is identity matrix.."<<endl;

}
else{

cout<<"your matrix is not identity matrix..."<<endl;

}
}
