#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int arr[5],sum=0;
    float avg;

    for(int i=0;i<5;i++){
        cout<<"enter the "<<i+1<<" element of an array=";
        cin>>arr[i];
    }
    for(int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    avg=sum/5.0;
    cout<<"sum="<<sum<<endl;
    cout<<"avg="<<avg<<endl;
    return 0;
}