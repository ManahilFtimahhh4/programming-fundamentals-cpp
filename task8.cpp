#include<iostream>
using namespace std;
void print(int matrix[][5],int n);
int  largestcolumn(int matrix[][5],int n);
void swap(int matrix[][5],int index,int n);
main(){
    int index;
    cout<<"Enter the number of rows"<<endl;
    int n;
    cin>>n;
    int matrix[n][5];
    cout<<"Enter the elements of matrix"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<"Enter element at position"<<"["<<i<<"]["<<j<<"]";
            cin>>matrix[i][j];
        }
    }
    print(matrix,n);
    index = largestcolumn(matrix,n);
    swap(matrix,index,n);
}
void print(int matrix[][5],int n){
    cout<<"Original MAtrix is"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}
int largestcolumn(int matrix[][5],int n){
    int largest=0;
    int colindex=0;
    for(int j=0;j<5;j++){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+matrix[i][j];
        }
    if(largest<sum){
        largest=sum;
        colindex=j;
    }
}
cout<<"Column number "<<colindex+1<<" Sum is "<<largest<<endl;
return colindex;
}
void swap(int matrix[][5],int index,int n){
    if(index!=0){
        for(int i=0;i<n;i++){
            int temp=matrix[i][0];
            matrix[i][0]=matrix[i][index];
            matrix[i][index]=temp;
        }
    }
    cout<<"Modified Matrix is "<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }

}