#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the limit=";
    cin>>n;

    for(int i=0;i<=n;i++){
    sum=sum+(i*i);
    }
    cout<<"sum="<<sum;
    return 0;
}