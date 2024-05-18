#include<iostream>
#include<conio.h>
using namespace std;

class sum{
   private: int a,b;

   public: void getdata();
           void  putdata();
};

void sum::getdata(){
       cout<<"enter two number=";
       cin>>a>>b;      
}
void sum::putdata(){
      cout<<"the sum of two number="<<a+b;
}

int main()
{
    sum aa;
     aa.getdata();
    aa.putdata();
    return 0;
}
