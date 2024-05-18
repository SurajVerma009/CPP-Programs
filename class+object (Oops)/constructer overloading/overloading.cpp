// we can create many constructer in one class but each constructer have two diffrence-->
// 1-->No of Arguments
// 2-->Type of arguments
// this is called constucter overloading

#include<iostream>
using namespace std;

class demo
{
     int a,b;
     float c;
     public:demo(){ // --->Default Constructer
             a=10;
             b=20;
             c=30;
     }
     demo(int m,int n,float k){  //--->Parameterized Constructer
        a=m;
        b=n;
        c=k;
     }
     demo(demo &z){   //---->Copy Constructer
        a=z.a;
        b=z.b;
        c=z.c;
     }
     void putdata(){
        cout<<"\na="<<a;
         cout<<"\nb="<<b;
          cout<<"\nc="<<c;
     }
};

int main()
{
    demo aa;
    demo bb(1,2,3.3);
    demo cc=aa;
    aa.putdata();
     bb.putdata();
      cc.putdata();
      return 0;
}