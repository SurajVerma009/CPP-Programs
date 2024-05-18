#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,sum=0;
    cout<<"enter the number=";
    cin>>n;

    for(int i=1;i<n;i++){
        if(n%i==0){
            sum=sum+i;
        }
    }
    cout<<"sum="<<sum<<endl;
    if(sum==n){
        cout<<"this is a perfect number";
    }
    else{
        cout<<"this is not a perfect number";
    }
    return 0;
}