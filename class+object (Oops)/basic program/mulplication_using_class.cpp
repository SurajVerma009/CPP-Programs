#include<iostream>
#include<conio.h>

using namespace std;

class mul{
    private:float a,b,c,d,e;
    public:void multiplication();

};
void mul::multiplication(){
       cout<<"enter five decimal number=";
       cin>>a>>b>>c>>d>>e;
       cout<<"multiplication="<<a*b*c*d*e;
}
int main()
{
    mul aa;
    aa.multiplication();
    return 0;
}