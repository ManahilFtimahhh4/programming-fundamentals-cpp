#include<iostream>
using namespace std;
main()
{

int size[10];
int n=0;

cout<<"enter numbers  here and enter zero to end program : ";
    for(int j=0 ; j<10 ; j++ ){
    
    

cin>>size[j];


if(size[j]==0)

{
    break;
}


n++;



    }


for(int i=0 ; size[i] != 0 ; i++)
{
    if(size[i]==7)
    {
        cout<<"boom!";
        
       return 0; 
    }

}
    

        cout << "There is no 7 in the array" << endl;  
 
return 0;

} 















