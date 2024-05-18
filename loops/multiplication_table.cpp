#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n;
    cout<<"enter the number you want table=";
    cin>>n;

    for(int i=1;i<=10;i++){
        cout<<n*i<<endl;
        // cout<<n<<"*"<<i<<"="<<n*i<<endl;----->another way
    }
    return 0;
}