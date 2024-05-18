#include<iostream>
#include<conio.h>

using namespace std;
class A{
      protected:int x;
      public:void input()
      {
          cout<<"enter the number=";
          cin>>x;
      }
         
};

class B:public A{
           int y;
           public:void getdata()
           {
            cout<<"enter the number=";
            cin>>y;
           }
           void putdata()
           {
            cout<<"Addition="<<x+y;
           }
};

int main()
{
    B ob;
    ob.input();
    ob.getdata();
    ob.putdata();
    return 0;
}