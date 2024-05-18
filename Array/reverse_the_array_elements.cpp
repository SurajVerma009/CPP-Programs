#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int arr[5]={12,13,14,15,16};

    for(int i=0;i<5/2;i++){
    int temp;
    temp=arr[i];
    arr[i]=arr[5-i-1];
    arr[5-i-1]=temp;
    }
    for(int i=0;i<5;i++){
    cout<<i+1<<" element is ="<<arr[i]<<endl;
    }
    return 0;

}