#include<iostream>
using namespace std;
int main(){

    // l = length , b = breadth , p = perimeter , a = area ; 
    double l , b ;

    cout<<"Enter Length of rectangle "<<endl;
    cin>>l;
    cout<<"Enter Breadth of rectangle "<<endl;
    cin>>b;

    double p = 2*(l+b) , a = l*b ;

    cout<<"Area of rectangle is "<< a <<endl;
    cout<<"Perimeter of rectangle is "<< p <<endl;

    if(a>p)cout<<"Area of rectangle is greater than Perimeter of rectangle"<<endl;
    if(a<p)cout<<"Perimeter of rectangle is greater than Area rectangle"<<endl;

    return 0;
}