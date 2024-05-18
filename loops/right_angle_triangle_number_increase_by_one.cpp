#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int n,k=1;
    cout<<"enter the row number=";
    cin>>n;

    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
           
                cout<<k++<<" ";
        }
        cout<<endl;
    }
}