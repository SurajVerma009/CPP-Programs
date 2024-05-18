#include<iostream>

using namespace std;

class demo{
     int a,b;
     public:void getdata();
            friend int sum(demo);
};
void demo::getdata()
{
    cout<<"enter the first number=";
    cin>>a;
    cout<<"enter the second number=";
    cin>>b;
}
int sum(demo ob)
//    --->hmne demo class ka object aa bnaya h but hm is friend function ke defination me apni marzi se koi bhi object class ka declare kr sakte h 
{
   cout<<"addition="<<(ob.a+ob.b);
}

int main()
{
    demo aa;
    aa.getdata();
    sum(aa);
    return 0;
}