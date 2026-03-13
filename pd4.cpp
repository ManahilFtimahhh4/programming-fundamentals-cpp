#include<iostream>
using namespace std;
main(){
  string month;
  int date;
  
  cout<<"enter you birth month : ";
  cin>>month;

  cout<<"enter your date of birth : ";
  cin>>date;

if(month=="march" && date>20 || month=="april" && date<19){
    cout<<"your zodiac sign is ARIES"<<endl;
    cout<<"your symbol is : THE RAM"<<endl;
}
if(month=="april" && date>20 || month=="may" && date<20){
    cout<<"your zodiac sign is TAURUS"<<endl;
    cout<<"your symbol is : THE BULL"<<endl;
}
if(month=="april" && date>21 || month=="june" && date<20){
    cout<<"your zodiac sign is  GIMINI"<<endl;
    cout<<"your symbol is : THE TWINS "<<endl;
}

if(month=="june" && date>21 || month=="july" && date<22){
    cout<<"your zodiac sign is CANCER "<<endl;
    cout<<"your symbol is : THE CRAB "<<endl;
}
if(month=="july" && date>23 || month=="august" && date<22){
    cout<<"your zodiac sign is LEO"<<endl;
    cout<<"your symbol is : THE LION "<<endl;
}

if(month=="august" && date>23 || month=="september" && date<22){
    cout<<"your zodiac sign is VIRGO"<<endl;
    cout<<"your symbol is : THE VIRGIN "<<endl;
}
if(month=="september" && date>23 || month=="october" && date<22){
    cout<<"your zodiac sign is LIBRA "<<endl;
    cout<<"your symbol is : THE SCALES"<<endl;
}

if(month=="october" && date>23 || month=="november" && date<21){
    cout<<"your zodiac sign is SCORPIO "<<endl;
    cout<<"your symbol is : THE  SCORPION"<<endl;
}

if(month=="november" && date>22 || month=="december" && date<21){
    cout<<"your zodiac sign is SAGITTARIUS"<<endl;
    cout<<"your symbol is : THE ARCHERS "<<endl;
}

if(month=="december" && date>22 || month=="january" && date<19){
    cout<<"your zodiac sign is CAPRICORNS "<<endl;
    cout<<"your symbol is : THE GOAT "<<endl;
}

if(month=="january" && date>20 || month=="feburary" && date<18){
    cout<<"your zodiac sign is  AQURIUS"<<endl;
    cout<<"your symbol is : THE WATER BEARER"<<endl;
}
if(month=="feburary" && date>19 || month=="march" && date<20){
    cout<<"your zodiac sign is PISCES "<<endl;
    cout<<"your symbol is : THE FISHEScls "<<endl;
}


}