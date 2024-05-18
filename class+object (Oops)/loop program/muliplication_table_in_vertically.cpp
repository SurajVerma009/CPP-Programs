#include<iostream>
using namespace std;

class mul_table
{
    int n;
    public:void getdata();
           void putdata();
};
void mul_table::getdata()
{
    cout<<"enter the number of term=";
    cin>>n;
}
void mul_table::putdata()
{
    for(int i=1;i<=10;i++){
    for(int j=1;j<=n;j++)
    {
     cout<<j<<"*"<<i<<"="<<j*i<<" ";
       
    }
     cout<<endl;
    }
}
int main()
{
    mul_table ob;
    ob.getdata();
    ob.putdata();
    return 0;
}