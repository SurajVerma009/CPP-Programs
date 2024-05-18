#include<iostream>
#include<conio.h>

using namespace std;

class A
{
     private:int a;
     public:void input();
            int get(){
                return a;
            }
};
void A::input()
{
    cout<<"enter the first number=";
    cin>>a;
}
class B:public A
{
    private:int b;
    public:void getdata();
           void putdata();
};

void B::getdata(){
    cout<<"enter the second number=";
    cin>>b;
}
void B::putdata(){
    cout<<"Addition="<<get()+b;

}
int main()
{
    B aa;
    aa.input();
    aa.getdata();
    aa.putdata();
    return 0;
}