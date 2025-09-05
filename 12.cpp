#include<iostream>
using namespace std;
int main(){

    // sp is selling prize and cp is cost prize

    double sp , cp;

    cout<<"enter selling prize of product "<<endl;
    cin>>sp;
    cout<<"enter cost prize of product "<<endl;
    cin>>cp;

    if(sp-cp>0)cout<<"You have profit approx. "<<sp-cp<<endl;
    if(sp-cp<0)cout<<"You have loss approx. "<<abs(sp-cp)<<endl;
    if(sp-cp==0)cout<<"You have no loss no profit "<<endl;

    return 0;
}