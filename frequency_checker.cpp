 #include<iostream>
 using namespace std;
 main()
 {

    int n,d,last_digit,count=0;
    cout<<"enter the number  : "<<endl;
    cin>>n;
    cout<<"enter the digits who's frequency is to be find : "<<endl;
    cin>>d;

    for( int i=n ; i>0 ; i=n/10)

    {

   last_digit=i%10;

        if(last_digit==d)
        {
            count++;
        }


    }
    cout << "your digit " << d << " repeats " << count << " times" << endl;
    







 }