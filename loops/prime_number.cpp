#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,count=0;
    cout<<"enter the number=";
    cin>>n;

    for(int i=1;i<=n;i++){
        if(n%i==0){
            count++;
        }
    }
    if(count==2){
        cout<<"this is a prime number";

    }
    else{
        cout<<"this is not a prime number";
    }
    return 0;
}