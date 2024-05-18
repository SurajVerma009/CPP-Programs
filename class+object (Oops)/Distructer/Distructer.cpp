#include<iostream>
using namespace std;

int count =0;

class A
{
     public:A()
     {
       count++;
       cout<<"\nNo of Object created="<<count;
     } 
     ~A()
     {
        cout<<"\nHow much object take memory space="<<--count;
        
     }
     
};

int main()
{
    A aa,bb,cc;
    
    return 0;
}