#include<iostream>
using namespace std;
int main(){

    int number;
    cout<<"Enter a Number and check it's divisiblity by 5 "<<endl;
    cin>>number;

    if(number%5==0)cout<<"It is divisible by 5"<<endl;
    if(number%5!=0)cout<<"It is not divisible by 5"<<endl;

    return 0;
}