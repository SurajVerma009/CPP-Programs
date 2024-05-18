#include<iostream>

using namespace std;

int main()
{
    int ammount, rate,time;

    cout<<"enter the ammount=";
    cin>>ammount;

    cout<<"enter the rate=";
    cin>>rate;

    cout<<"enter the time=";
    cin>>time;

    float si;
    si=(ammount*rate*time)/100;
    
    cout<<"simple interest="<<si;

    return 0;
}