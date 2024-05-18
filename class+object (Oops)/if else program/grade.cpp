#include<iostream>
using namespace std;

class grade
{
   int marks;
   public:void getdata();
          void putdata();
};
void grade::getdata()
{
    cout<<"enter the marks=";
    cin>>marks;
}
void grade::putdata()
{
    if(marks<25){
        cout<<"Grade=F";
    }
    else if(marks>=25&&marks<45){
        cout<<"Grade=E";
    }
    else if(marks>=45&&marks<50){
        cout<<"Grade=D";
    }
    else if(marks>=50&&marks<60){
        cout<<"Grade=C";
    }
    else if(marks>=60&&marks<=80){
        cout<<"Grade=B";
    }
    else if(marks>80){
        cout<<"Grade=A";
    }
}
int main()
{
    grade ob;
    ob.getdata();
    ob.putdata();
    return 0;
}