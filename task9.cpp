#include<iostream>
using namespace std;
void countidentical(int matrix[][3],int n);
main(){
    cout<<"Enter the number of rows"<<endl;
    int n;
    cin>>n;
    int matrix[n][3];
    cout<<"Enter the elements of the matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cout<<"Enter element at position"<<"["<<i<<"]["<<j<<"]";
            cin>>matrix[i][j];
        }
    }
    countidentical(matrix,n);
}
void countidentical(int matrix[][3],int n){
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(matrix[i][0]==matrix[j][0]&& matrix[i][1]==matrix[j][1]&& matrix[i][2]==matrix[j][2]){
           count++;
           }
        }
    }
    cout<<"The count of identical rows "<<count<<endl;
}