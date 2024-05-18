#include<iostream>
using namespace std;

class square{
    private:int length,breadth;
    public:void getdata();
           void putdata();
};
void square::getdata()
{
    cout<<"enter the length=";
    cin>>length;
    cout<<"enter the breadth=";
    cin>>breadth;
}
void square::putdata()
{
    if(length==breadth){
        cout<<"it is a square";
    }
    else{
        cout<<"it is a reactangle";
    }
}
int main()
{
   square ob;
   ob.getdata();
   ob.putdata();
   return 0;
}