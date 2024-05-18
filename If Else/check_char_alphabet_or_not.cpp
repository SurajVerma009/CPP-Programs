#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"enter the charector=";
    cin>>ch;

    if((ch>=65&&ch<=90)||(ch>=97&&ch<=122)){
        cout<<"this is an alphabet";
    }
    else{
        cout<<"this is not an alphabet";
    }
    return 0;
}