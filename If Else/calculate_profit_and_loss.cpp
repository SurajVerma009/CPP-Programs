#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int sp,cp,profit,loss;
    cout<<"enter the cost price=";
    cin>>cp;
    cout<<"enter the selling price=";
    cin>>sp;

    profit=sp-cp;
    loss=cp-sp;

    if(profit>0){
        cout<<"you gain="<<profit<<"rupeees profit"<<endl; 
    }
     else if(profit==0){
        cout<<"you gain no profit"<<endl; 
    }
     else {
        cout<<"Ohh! you are in "<<loss<<"rupees loss"<<endl; 
    }
    return 0;

}