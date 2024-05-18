#include<iostream>
using namespace std;

class attendence
{
   int no_of_class_held,no_of_classes_attended;
   public:void getdata();
          void putdata();
};
void attendence::getdata()
{
    cout<<"enter the no of class held=";
    cin>>no_of_class_held;
    cout<<"enter the no of classes attend=";
    cin>>no_of_classes_attended;
}
void attendence::putdata()
{
   float percentage;
   percentage=(no_of_classes_attended*100)/no_of_class_held;
   cout<<"attendence percentage="<<percentage<<endl;
   if(percentage>=75){
     cout<<"this student is allowed for sitting in exam";
   }
   else{
     cout<<"this student is not allowed for sitting in exam";
   }
}
int main()
{
    attendence ob;
    ob.getdata();
    ob.putdata();
    return 0;
}