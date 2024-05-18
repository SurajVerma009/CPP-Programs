#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,fact=1;
    cout<<"enter the number=";
    cin>>n;
    for(int i=n;i>=1;i--){
        fact=fact*i;
    }
    cout<<"factorial="<<fact;
    return 0;
}