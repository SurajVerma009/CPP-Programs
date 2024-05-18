// if no of terms=5
// then series sum(1)+(1+2)+(1+2+3)+(1+2+3+4)+(1+2+3+4+5)=35

#include<iostream>
using namespace std;

class series
{
    int n;
    public:void getdata();
           void putdata();
};
void series::getdata()
{
    cout<<"enter the no of terms=";
    cin>>n;
}
void series::putdata()
{
    int i,a=0,b=0;
    for(i=1;i<=n;i++){
    a=a+i;
    b=b+a;
    }
    cout<<"sum of above series="<<b;
}

int main()
{
    series ob;
    ob.getdata();
    ob.putdata();
    return 0;
}