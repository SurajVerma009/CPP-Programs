// static member fuction-->static member fuction only take static variable value not take any normal ya private variable value

#include<iostream>
using namespace std;

class demo
{
     int a;
     static int y;
     public:void getdata();
            void putdata();
            static void print();
};
int demo::y;  //---> imporatant line

void demo::getdata()
{
    cout<<"enter the num=";
    cin>>a;
}
void demo::putdata()
{
    cout<<"a="<<a<<endl;
    
}
void demo:: print(){
    cout<<"static variable value="<<y;
   
}

int main()
{
    demo ob;
    ob.getdata();
    ob.putdata();
    demo::print();//---> important line
    return 0;
}

