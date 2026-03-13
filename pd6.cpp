#include<iostream>
using namespace std;
main(){

    string fruit;
    float quantity;
    string day;
    float price;
    float bannanas=2.50;
    float apples=2.50;
    float oranges=0.85;
    float kiwis=2.70;
    float pineapples=5.50;
    float grape_fruits=1.45;
    float grapess=3.85;
    float bannanaz=2.70;
    float applez=1.25;
    float orangez=0.90;
    float kiwiz=3.00;
    float pineapplez=5.60;
    float grape_fruitz=1.60;
    float grapesz=4.20;
cout<<"enter the  fruit you want to buy : ";
cin>>fruit;
cout<<"enter the quantity of fruits you want to buy:  ";
cin>>quantity;

cout<<"enter the day you are buying fruits : ";
cin>>day;
   if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="bannana" ){

    price=bannanas*quantity;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="apple" ){

    price=quantity*apples;


   cout<<"your price is :  "<<price<<endl;
}
else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="orange" ){

    price=quantity*oranges;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="grape_fruit"){

    price=grape_fruits*quantity;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="kiwi" ){

    price=kiwis*quantity;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="grapes" ){

    price=grapess*quantity;


   cout<<"your price is : "<<price<<endl;
}

 else if(day=="monday" ||day=="tuesday" || day=="wednesday" || day=="thursday" ||day=="friday" && fruit=="pineapple" ){

    price=pineapples*quantity;


   cout<<"your price is :  "<<price<<endl;
}
 else if(day=="sunday" || day=="staurday" && fruit=="bannana" ){

    price=bannanaz*quantity;


   cout<<"your price : "<<price<<endl;
}

else if(day=="sunday" || day=="saturday"  && fruit=="apple" ){

    price=quantity*applez;


   cout<<"your price is : "<<price<<endl;
}
else if(day=="sunday" || day=="saturday" && fruit=="orange" ){

    price=quantity*orangez;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="sunday" ||day=="saturday" && fruit=="grape_fruit"){

    price=grape_fruitz*quantity;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="sunday" || day=="saturday" && fruit=="kiwi" ){

    price=kiwiz*quantity;


   cout<<"your price is : "<<price<<endl;
}

else if(day=="sunday" || day=="saturday" && fruit=="grapes" ){

    price=grapesz*quantity;


   cout<<"your price is : "<<price<<endl;
}

 else if(day=="sunday" || day=="saturday" && fruit=="pineapple" ){

    price=pineapplez*quantity;


   cout<<"your price is :"<<price<<endl;
}









}