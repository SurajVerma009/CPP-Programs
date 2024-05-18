#include<iostream>
#include<conio.h>

using namespace std;
int main()
{
    int n;
    cout<<"enter any number=";
    cin>>n;

    if(n==0){
        cout<<"the number is null";
    }
    else if(n>0){
        cout<<"the number is positive";
    }
    else{
        cout<<"the number is negative";
    }

    return 0;
}