#include<iostream>
using namespace std;

class time
{
    int h,m;
    public:void getdata();
           void putdata();
           void sum(time,time);
};
void time::getdata()
{
    cout<<"enter the hour=";
    cin>>h;
    cout<<"enter the minute=";
    cin>>m;
}
void time::putdata()
{
    cout<<"hour="<<h<<endl;
    cout<<"minute="<<m;
}
void time ::sum(time t1,time t2)
{
   h=(t1.m + t2.m)/60;
   m=(t1.m+t2.m)%60;
   h=h+(t1.h+t2.h);
}

int main()
{
    time t1,t2,t3;
    t1.getdata();
    t2.getdata();
    t3.sum(t1,t2);
    t3.putdata();
    return 0;
}