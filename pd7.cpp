#include<iostream>
using namespace std;
main(){
    char stay;
    int days;
    string months;
    float charges;
    float discount;
    float actual_price;
    float price;
    float actual_price_a;


cout<<"enter number of day for your stay : ";
cin>>days;

cout<<"enter the months when yiu are going to stay in hotel : ";
cin>>months;


if(months=="may" || months=="october"  && days>14){

    charges=days*50;
    discount=charges*0.3;
     price=charges-discount;
    cout<<"your actual charges after discout are : "<<price<<"$"<<endl;          


}

else if(months=="june" ||  months=="spetember"  && days>=14){
        
    charges=days*68.70;
    discount=charges*0.1;
    actual_price=charges-discount;
    
    cout<<"your charges for apartment are : "<<actual_price<<endl;
}


   

      else  if(months=="may" || months=="october"  && days>14){

        charges=days*50;
        discount=charges*0.3;
         price=charges-discount;
        cout<<"your actual charges after discout are : "<<price<<"$"<<endl;          


}







    else if(months=="june" ||  months=="spetember" && days<14){
        
        charges=days*75.20;

        cout<<"your charges for studio are : "<<charges<<endl;
    }

    
    else if(months=="june" ||  months=="spetember" && days>14){

        charges=days*75.20;
        discount=charges*0.2;
        actual_price_a=charges-discount;
    
        cout<<"your actual charges after discout are : "<<actual_price_a<<"$"<<endl;   
    }       




   


else if(months=="july" ||  months=="august"  && days>=1){
        charges=days*76;
        
        cout<<"your charges for studio  are : "<<charges<<endl;

}


if(months=="may" || months=="october"  && days>=1){



    

    charges=days*65;
    discount=charges*0.1;
    actual_price=charges-discount;
    cout<<"your charges for apartment  is : "<<actual_price<<"$"<<endl;
}




else if(months=="july" ||  months=="august" && days>=1){
    charges=days*77;
    discount=charges*0.1;
    actual_price=charges-discount;
    
    cout<<"your charges for apartment are : "<<actual_price<<endl;
}

else if(months=="may" || months=="october"    &&   days>7){

    charges=days*50.00;
    discount=charges*0.5;
    actual_price=charges-discount;
    cout<<"your charges for studio is : "<<actual_price<<"$"<<endl;
}



}