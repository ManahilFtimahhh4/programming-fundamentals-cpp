#include<iostream>
using namespace std;


void printcars(int cars[][5], int colsize );

int main()
{

const int rowsize=5;
const int colsize=5;


int cars[rowsize][colsize]={{10,7,12,10,4},
                    {18,11,15,17,2},
                    {23,19,12,16,14},
                    {7,12,16,0,2},
                    {3,5,6,2,1}};


    printcars( cars ,colsize );
       return 0;     
}

void printcars(int cars[][5],int colsize ){

    for (int row = 0; row < 5; row++) {

    cout<<cars[row][2]<<"\t";

}

cout<<endl;
    }













