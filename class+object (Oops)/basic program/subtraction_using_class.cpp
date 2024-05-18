#include<iostream>
#include<conio.h>
using namespace std;

class sub{
     private:int a,b;
     public:void getdata();
            void putdata();
};
void sub:: getdata(){
    cout<<"enter two number for subtraction=";
    cin>>a>>b;
}
void sub::putdata(){
    cout<<"subtraction="<<a-b;
}

int main()
{
    sub ob;
  ob.getdata();
  ob.putdata();
  return 0;
}