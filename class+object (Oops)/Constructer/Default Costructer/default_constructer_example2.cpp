#include<iostream>
using namespace std;

class B
{
     int a,b;
     public:B();
             void putdata();
};
B::B()
{
    a=8,b=9;
}
void B::putdata()
{
    cout<<"a="<<a<<"\nb="<<b;
}
int main()
{
    B bb;
    bb.putdata();
    return 0;
}