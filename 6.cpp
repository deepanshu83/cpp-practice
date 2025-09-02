// float x = 3.5; arthimetic operator on float

#include<iostream>
using namespace std;

int main(){

    float x = 4.5;
    float y = 2.5;
    int z = 4;  // agar int me point lagaoge to . ke baad ke number nhi dikhe ge print pr jasie x = 4.5 ; to cout pr x = 4 hi dekhe ga 

    cout<< x <<endl;
    cout<< z <<endl;
    cout<< x + z <<endl;
    cout<< x + y <<endl;
    cout<< x - y <<endl;
    cout<< x * y <<endl;
    cout<< x / y <<endl;
    // cout<< x % y <<endl;  this is not possible in float it shows error , float % float
    // cout<< x % z <<endl; this is not possible in it , It shows error , float % int
    // cout<< z % x <<endl; also on int % float


    // calculate area of circle

    int r ;
    float area , pi ;

    r = 13;
    pi = 3.14;
    area = pi * r*r;

    cout<< "Area of Circle is " << area <<endl ;


    // More calaulations on float
  
    float P = 540 ;
    float R = 32 ;
    float T = 3 ;
    float SI = P*R*T / 100 ;

    cout<< SI <<endl;

    return 0;
}