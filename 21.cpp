#include<iostream>
using namespace std;
int main(){

    int x , y;

    cout<<"Enter value of x "<<endl;
    cin>>x;
    cout<<"Enter value of y "<<endl;
    cin>>y;

    if(x>0 && y>0){
           cout<<"x and y lies in first qudrants"<<endl;
    }

    else if(x<0 && y>0){
           cout<<"x and y lies in second qudrants"<<endl;
    }

    else if(x<0 && y<0){
           cout<<"x and y lies in third qudrants"<<endl;
    }

    else if(x>0 && y<0){
           cout<<"x and y lies in fourth qudrants"<<endl;
    }
        else if(x==0 && y==0){
           cout<<"x and y lies origin "<<endl;
    }
    
    else if( y==0){
           cout<<"x and y lies in x axis"<<endl;
    }

    else if(x==0 ){
           cout<<"x and y lies in y axis"<<endl;
    }

    else{
        cout<<"Error"<<endl;
    }

    return 0;
}