// if year of service is greater than 5 years so you receive 5 % bonus ammount
#include<iostream>
using namespace std;

class bonus{
   int sallary,year;
   public:void getdata();
          void putdata();
};
void bonus::getdata(){
    cout<<"enter the sallary of employee=";
    cin>>sallary;
    cout<<"enter the year of service of an employee=";
    cin>>year;
}
void bonus::putdata(){
    float bonus;
    if(year>5){
     bonus=sallary*0.05;
     cout<<"bonus="<<bonus<<endl;
     cout<<"your net bonus ammount="<<sallary+bonus;
    }
    else{
        printf("year of service of this employee is not greater than 5 years so you can not receive any bonus");
    }
}
int main()
{
    bonus ob;
    ob.getdata();
    ob.putdata();
    return 0;
}