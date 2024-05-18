#include<iostream>
using namespace std;

class B;
class A{
      int a;
      public:void getdata();
             friend void Big(A,B);  //---->friend fuction ko ham public ya private kahi bhi declare kr sakte h

};
class B{
      int b;
      public:void getdata();
             friend void Big(A,B);
};
void A::getdata()
{
    cout<<"enter the First number=";
    cin>>a;
}
void B::getdata()
{
    cout<<"enter the second number=";
    cin>>b;

}
void Big(A aa,B bb){
    if(aa.a>bb.b){
        cout<<"The Max number ="<<aa.a;
    }
    else if(bb.b>aa.a){
        cout<<"The Max number ="<<bb.b;
    }
    else{
        cout<<"Both number are equal";
    }
}

int main()
{
    A aa;
    B bb;
    aa.getdata();
    bb.getdata();
    Big(aa,bb);
    return 0;
}