#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int arr[]={12,34,89,85,23};
    int small;
    int large;
    // small=arr[0];
    // large=arr[0];

    for(int i=0;i<5;i++){
        if(arr[i]<small){
            small=arr[i];
        }
        else if(arr[i]>large){
            large=arr[i];
        }
        
    }
     cout<<"the smallest element in array="<<small<<endl;
     cout<<"the largest element in array="<<large<<endl;
    return 0;
}
