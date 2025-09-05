#include<iostream>
using namespace std ;
int main(){

    double a ;

    cout<< "Enter a Number and Check it that how many digit number have "<<endl;
    cin>>a;

    a = abs(a);

    if(a>=0 && a<=9)
    {
        cout<<"Your enter number have one digits "<<endl;
    }
    else if(a>=10 && a<=99)
    {
        cout<<"Your enter number have two digits "<<endl;
    }
    else if(a>=100 && a<=999)
    {
        cout<<"Your enter number have three digits "<<endl;
    }
    else if(a>=1000 && a<=9999)
    {
        cout<<"Your enter number have four digits "<<endl;
    }
    else {
        cout<<"Your enter number have more than four digits "<<endl;
    }

    return 0;
}