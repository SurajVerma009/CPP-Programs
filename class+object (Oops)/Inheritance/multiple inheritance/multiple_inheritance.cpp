//    Multiple inheritance->There are many base class not one

#include<iostream>
using namespace std;

class A    //------->Base Class
{
     protected:int x,y;
     public:void input(){
        cout<<"enter the value of x=";
        cin>>x;
        cout<<"enter the value of y=";
        cin>>y;
     }
};

class B
{
      protected:int a,b;          //------->Base Class
      public:void getdata(){
      cout<<"enter the value of a=";
      cin>>a;
      cout<<"enter the value of b=";
      cin>>b;
      }
};

class C:public A,public B       //------->Drive Class
{
     public:void putdata()
     {
        cout<<"x+a="<<x+a<<endl;
        cout<<"y+b="<<y+b;
     }
};

int main()
{
    C aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}