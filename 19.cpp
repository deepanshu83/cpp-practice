#include<iostream>
using namespace std;
int main(){

    int r , s ,a ;

    cout<<"Enter Ram's age "<<endl;
    cin>>r;

    cout<<"Enter Shyam's age "<<endl;
    cin>>s;

    cout<<"Enter Ajay's age  "<<endl;
    cin>>a;

    if(r<s && r<a ){
        cout<<"Ram is Youngest in three of them"<<endl;
    }
   else if(s<r && s<a ){
        cout<<"Shyam is Youngest in three of them"<<endl;
    }
    else{
        cout<<"Ajay is Youngest in three of them"<<endl;
    }

    return 0;
}