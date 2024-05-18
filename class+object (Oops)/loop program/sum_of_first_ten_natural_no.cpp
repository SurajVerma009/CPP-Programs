#include<iostream>
using namespace std;

class nat_sum
{
   int n;
   public:void getdata();
          void putdata();
};
void nat_sum::getdata()
{
    cout<<"enter the no of terms=";
    cin>>n;
}
void nat_sum::putdata()
{
    int i,sum=0;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
 cout<<"sum="<<sum;
}
int main()
{
    int sum;
    nat_sum ob;
    ob.getdata();
    ob.putdata();
    return 0;
}