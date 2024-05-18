#include<iostream>
using namespace std;

class A
{
     int a;
     float b;
     char ch;
     public:A(){
        a=12;
        b=2.6;
        ch='P';
     }
     void output(){
        cout<<"a="<<a<<"\nb="<<b<<"\nch="<<ch;
     }
};

int main()
{
    A aa;
    aa.output();
    return 0;
}