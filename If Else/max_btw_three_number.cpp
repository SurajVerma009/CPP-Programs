#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n1,n2,n3;

    cout<<"enter the first number=";
    cin>>n1;
    cout<<"enter the second number=";
    cin>>n2;
    cout<<"enter the three number=";
    cin>>n3;

    if((n1>n2)&&(n2>n3)){
        cout<<"the number "<<n1<<" is greator";
    }
   else if((n2>n3)&&(n3>n1)){
        cout<<"the number "<<n2<<" is greator";
    }
    else{
        cout<<"the number "<<n3<<" is greator";
    }
    return 0;

}