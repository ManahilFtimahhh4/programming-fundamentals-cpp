#include<iostream>
using namespace std;


void printcars(int cars[][5]);

int main()
{

const int rowsize=5;
const int colsize=5;


int cars[rowsize][colsize]={{10,7,12,10,4},
                    {18,11,15,17,2},
                    {23,19,12,16,14},
                    {7,12,16,0,2},
                    {3,5,6,2,1}};


    printcars( cars );
       return 0;     
}

int count=0;
void printcars(int cars[][5]){

    for (int col = 0; col < 5; col++) {


count=count+cars[2][col];
   
}

    cout<<"total number of nisaani  cars are : "<<count<<"\t";


    }
