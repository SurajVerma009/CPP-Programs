#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    float celcius,fohrenheit;

    cout<<"enter the celcius degree=";
    cin>>celcius;

    fohrenheit=(celcius*9/5)+32;

    cout<<"fohrenheit="<<fohrenheit<<"degree";

    return 0;
}