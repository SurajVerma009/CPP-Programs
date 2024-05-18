#include<iostream>
using namespace std;

class maximum
{
   int a,b;
   public:void getdata();
          void putdata();
};
void maximum::getdata(){
    cout<<"enter two number=";
    cin>>a>>b;
}
void maximum::putdata(){
    if(a>b){
        cout<<a<<" is greater";
    }
    else if(a==b){
        cout<<"both number are equal";
    }
    else{
        cout<<b<<" is greater";
    }
}
int main(){
    maximum ob;
    ob.getdata();
    ob.putdata();
    return 0;
}