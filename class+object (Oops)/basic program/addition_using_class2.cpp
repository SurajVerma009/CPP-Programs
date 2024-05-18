#include<iostream>
#include<conio.h>

using namespace std;

class sum{
   private:int a,b;
   public:void getdata(){
       cout<<"enter two number=";
       cin>>a>>b;
   }
   void putdata(){
    cout<<"the sum of two number is="<<a+b;
   }
};
int main(){
    sum aa;
    aa.getdata();
    aa.putdata();
    return 0;
}