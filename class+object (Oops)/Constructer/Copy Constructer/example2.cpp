#include<iostream>
using namespace std;

class priyanka
{
      int a;
      public:priyanka(int k){
        a=k;
      }
      priyanka(priyanka &s){
        a=s.a;
      }
      void putdata();

};
void priyanka::putdata()
{
    cout<<"a="<<a<<endl;
}

int main()
{
    priyanka ob(111);
    priyanka ob2=ob;
    priyanka ob3=ob2;
   ob.putdata();
   ob2.putdata();
   ob3.putdata();
   return 0;
}