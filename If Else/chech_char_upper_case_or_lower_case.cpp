#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"enter any alphabet=";
    cin>>ch;

    if(ch>=65&&ch<=90){
        cout<<"this is upper case";
    }
    else if(ch>=97&&ch<=122){
        cout<<"this is lower case";
    }
    return 0;
}