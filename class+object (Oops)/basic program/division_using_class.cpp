#include<iostream>
#include<conio.h>

using namespace std;

class division{
    private:int a,b;
    public:void data();

};
void division::data(){
      cout<<"enter two number=";
      cin>>a>>b;
      cout<<"division="<<a/b;
}
int main()
{
    division cc;
    cc.data();
    return 0;
}