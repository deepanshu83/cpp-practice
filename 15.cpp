
// question :  take a input number from user and tell if it is divisible by 5 and 3 

#include<iostream>
using namespace std;
int main(){

    int num ;

    cout<<"Enter a number and check it's divisiablity by 5 and 3 "<<endl;
    cin>>num;

    if(num%5==0 && num%3==0){
        cout<<"Number is divisible by 5 and 3 both "<<endl;
    }
    else {
        cout<<"Not divisible by both "<<endl;
    }

    return 0;
}