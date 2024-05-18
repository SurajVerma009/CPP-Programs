#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the limit=";
    cin>>n;

    for(int i=1;i<=n;i++){
     if(i%2!=0){
        sum=sum+i;
     }
    }
    cout<<"sum="<<sum;
    return 0;
}