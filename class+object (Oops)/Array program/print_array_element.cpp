#include<iostream>
using namespace std;

class element{
   int a;
   public:void getdata(int i);
          void putdata(int k);
};
void element::getdata(int i)
{
    cout<<"enter the " <<i+1<<" element in array=";
    cin>>a;
}
void element::putdata(int k)
{
    cout<<"the "<<k+1<<" element in array="<<a<<endl;
}

int main()
{
    
    element ob[3];
    for(int  i=0;i<3;i++){
        ob[i].getdata(i);
    }
    
     for( int i=0;i<3;i++){
        ob[i].putdata(i);
    }
    return 0;
}

