#include<iostream>
using namespace std;

class demo
{
    int a;
    public:demo()
    {
        a=220;
    }
    demo(demo &b){
        a=b.a;
    }
    void putdata(){
        cout<<"a="<<a<<endl;
    }
};
int main(){
    demo ob;
    demo ob2(ob);
    ob.putdata();
     ob2.putdata();
    return 0;
}