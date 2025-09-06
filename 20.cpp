#include<iostream>
using namespace std;
int main(){

    int m;

    cout<<"Enter your Percentage to check your performance"<<endl;
    cin>>m;

    if(m>=91 && m<=100){
        cout<<"Your Performance is Amazing"<<endl;
    }
    else if(m>=81 && m<=90){
        cout<<"Your Performance is very good"<<endl;
    }
    else if(m>=61 && m<=80){
        cout<<"Your Performance is good"<<endl;
    }
    else if(m>=41 && m<=60){
        cout<<"You are average student"<<endl;
    }
    else if(m>=0 && m<=40){
        cout<<"You are fail "<<endl;
    }
    else {
        cout<<"Error"<<endl;
    }

    return 0;
}