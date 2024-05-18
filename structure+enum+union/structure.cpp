#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

struct employee{
char name[12];
    int code;
    float sallary;

};

int main(){
    
    struct employee e1;
   strcpy(e1.name,"suraj");
   e1.code=100;
   e1.sallary=12.35;

   cout<<"Name="<<e1.name<<endl;
   cout<<"code="<<e1.code<<endl;
   cout<<"sallary="<<e1.sallary<<endl;
   return 0;
}