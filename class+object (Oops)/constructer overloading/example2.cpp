//In this program you can see there are two parameterized costructer but 
//no of arguments are not same ,so this is constructer overloading

#include<iostream>
using namespace std;

class suraj
{
       int a,b;
       public:suraj(int p){
        a=p;
        b=p;
       }
       suraj(int p,int k)
       {
        a=p;
        b=k;
       }
       void putdata()
       {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
       }
};

int main()
{
    suraj aa(2);
    suraj aa2(2,3);
    aa.putdata();
    aa2.putdata();
    return 0;
}