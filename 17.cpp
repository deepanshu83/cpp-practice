
// question : take three numer from user and check if they are side of triangle or not

#include<iostream>
using namespace std;
int main(){

    int a , b , c;

    cout<< " enter value of a "<<endl;
    cin>>a;
    cout<< " enter value of b "<<endl;
    cin>>b;
    cout<< " enter value of c "<<endl;
    cin>>c;

    if( (a+b)>c && (b+c)>a && (c+a)>b){
        cout<<"These number are side of triangle "<<endl;
    }
    else{
                cout<<"These number are not the side of triangle "<<endl;

    }

    return 0;
}