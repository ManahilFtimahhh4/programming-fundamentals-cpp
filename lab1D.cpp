#include<iostream>
using namespace std;

void converter(int cars[][5],string color);


int main()
{

const int rowsize=5;
const int colsize=5;

string color;
cout<<"enter the color here : ";
cin>>color;


int cars[rowsize][colsize]={{10,7,12,10,4},
			{18,11,15,17,2},
			{23,19,12,16,14},
			{7,12,16,0,2},
			{3,5,6,2,1}};

 converter( cars, color);
}

 void converter(int cars[][5],string color)
{
int count=0;
for(int row=0 ; row<5 ; row++){

if(color=="red"){


count=count+cars[row][0];
}
else if(color=="black"){


count=count+cars[row][1];

}
else if(color=="brown"){


count=count+cars[row][2];


}
else if(color=="blue"){

count=count+cars[row][3];

}
else if(color=="gray"){


count=count+cars[row][4];

}



}



cout<<count<<endl;






}
