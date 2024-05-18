#include<iostream>
using namespace std;

class demo
{
      int a,b;
      public:demo(int m,int n){
        a=m;
        b=n;
      }
          void putdata();
};
void demo::putdata()
{
    cout<<"a="<<a<<"\nb="<<b;
}

int main()
{
    demo ob(10,20);
    ob.putdata();
    return 0;
}