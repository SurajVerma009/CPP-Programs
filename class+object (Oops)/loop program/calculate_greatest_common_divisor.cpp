#include<iostream>
using namespace std;

class gcd
{
   int a,b;
   public:void getdata();
          void putdata();
};
void gcd::getdata()
{
    cout<<"enter first number=";
    cin>>a;
    cout<<"enter second number=";
    cin>>b;
}
void gcd::putdata()
{
    int gcd;
    for(int i=1;i<a&&i<b;i++){
        if(a%i==0&&b%i==0){
           gcd=i; 
        }
    }
     cout<<"Gcd="<<gcd;
}
int main()
{
    gcd ob;
    ob.getdata();
    ob.putdata();
    return 0;
}