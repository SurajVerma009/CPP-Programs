#include<iostream>
using namespace std;

class demo
{
      int a,b;
      public:demo(int k,int l){
        a=k;
        b=l;
      }
      void putdata();
};
void demo::putdata()
{
    cout<<"a="<<a<<"\nb="<<b;
}

int main()
{
    int x,y;
    cout<<"enter two number=";
    cin>>x>>y;
    demo ob(x,y);
    ob.putdata();
    return 0;
}