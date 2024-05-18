// input=1234
// output=10 because=1+2+3+4==>10

#include<iostream>
using namespace std;

class adddigits
{
   int n;
   public:void getdata();
          void putdata();
};
void adddigits::getdata()
{
    cout<<"enter the number =";
    cin>>n;
}
void adddigits::putdata()
{
    int a,sum=0;
   while(n>0){
    a=n%10;
    n=n/10;
    sum=sum+a;
   }
   cout<<"sum of digits="<<sum;
}
int main()
{
    adddigits ob;
    ob.getdata();
    ob.putdata();
    return 0;
}