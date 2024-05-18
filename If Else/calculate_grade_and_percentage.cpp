#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
  int physics,chemistry,math,english,history;

  cout<<"enter the physics marks:";
  cin>>physics;
  cout<<"enter the chemistry marks:";
  cin>>chemistry;
  cout<<"enter the math marks:";
  cin>>math;
  cout<<"enter the english marks:";
  cin>>english;
  cout<<"enter the history marks:";
  cin>>history;

  int maximum_achieve=500,total_gain;
  total_gain=physics+chemistry+math+english+history;

  cout<<"total gain="<<total_gain<<endl;

  float per;
  per=(total_gain*100)/maximum_achieve;

  cout<<"percentage="<<per<<endl;

  if(per>=90){
    cout<<"GRADE-A";
  }
 else if(per>=80){
    cout<<"GRADE-B";
  }
  else if(per>=70){
    cout<<"GRADE-C";
  }
  else if(per>=60){
    cout<<"GRADE-D";
  }
  else if(per>=50){
    cout<<"GRADE-E";
  }
  else if(per<=40){
    cout<<"YOU ARE FAIL BRO";
  }
  return 0;
}