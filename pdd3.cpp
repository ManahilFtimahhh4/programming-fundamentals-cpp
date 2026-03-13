#include<iostream>
using namespace std;
main()
{

int size[4];

    for(int i=0 ; i<4 ; i++){
cout<<"enter the elemnts of array : ";
cin>>size[i];
}
if(size[0] == size[1] && size[1] == size[2] && size[2] == size[3])
{
 cout<<"true";

 return 0;
}
  else{
    cout<<"false";
    
}
return 0;

}
