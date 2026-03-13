#include<iostream>
using namespace std;
main(){

    
float sum = 0,sum2 = 0,sum3=0,sum4 = 0, sum5 = 0,  num ;
int p1 ,p2 ,p3 ,p4 , p5;

    cout<<"enter the total number of you want to enter : ";
    cin>>num;


    for( int i=0 ; i<num ; i=i+1)

    {
        float n;
        cout<<"enter your number here : ";
        cin>>n;
    


        if(  n<200)
        { 
            sum=sum+1;
        }

       else if(n>=200 && n<=399)
        {
            sum2=sum2+1;
        }
                    
       else if(n>=400 && n<=599)
        {
            sum3=sum3+1;
        }

      else  if(n>=600 && n<=799)
        {
            sum4=sum4+1;
        }

      else  if(n>800 && n<=999)
        {
            sum5=sum5+1;
        }

            p1 = ( sum / num)* 100;
            p2 = ( sum2/ num )* 100;
            p3 = ( sum3/num)* 100;
            p4 =  (sum4 /num)* 100;
            p5=( sum5 /num)* 100;





    }

cout<<" "<<p1<<" %"<<endl;
cout<<" "<<p2<<" %"<<endl;
cout<<" "<<p3<<" %"<<endl;
cout<<" "<<p4<<" %"<<endl;
cout<<" "<<p5<<" %"<<endl;






}