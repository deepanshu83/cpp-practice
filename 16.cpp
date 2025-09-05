
// question : "Take positive integer input and tell if it is divisible by 5 or 3."

#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<< "Enter a number "<<endl;
    cin>> num;

    if(num%5==0 || num%3==0)
    {
        cout<<"Number is divisible by 5 or 3 "<<endl;
    }
    else {
        cout << "Number is not divisible by 5 or 3 "<<endl;
    }

    return 0;
}