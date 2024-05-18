#include<iostream>
using namespace std;

class A
{
     protected:int a;
     public:void input(){
        cout<<"enter the value of a=";
        cin>>a;
     }
};

class B
{
    private:int b;
    public:void gatdata(){
        cout<<"enter the value of b=";
        cin>>b;
    }
    int getb(){
        return b;
    }
};

class C:public A,public B
{
     public:void addition()
     {
        cout<<"Addition="<<a+getb();
     }
};

int main()
{
    C ob;
    ob.input();
    ob.gatdata();
    ob.addition();
    return 0;
}