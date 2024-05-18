#include<iostream>

using namespace std;

int main()
{
    int n,rev=0,original;
    cout<<"enter the number=";
    cin>>n;
    original=n;
    while(n>0){
    rev=(rev*10)+n%10;
    n=n/10;
    }
    if(rev==original){
        cout<<"this number is palindrome ";
    }
    else{
        cout<<"this number is not palindrome ";
    }
    return 0;
}