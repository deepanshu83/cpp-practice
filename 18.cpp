#include<iostream>
using namespace std;
int main(){

    int a , b , c;
    cout<<"enter number a "<<endl;
    cin >>a;
    cout<<"enter number b "<<endl;
    cin >>b;
    cout<<"enter number c "<<endl;
    cin >>c;

    if(a >b && a>c){
        cout <<"a is greater than b and c"<<endl;
    }
    else if(a <b && b>c){
        cout <<"b is greater than a and c"<<endl;
    }
   else{
        cout <<"c is greater than a and b"<<endl;
    }

    return 0 ;
}