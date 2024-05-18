#include<iostream>
#include<conio.h>
#include<string.h>

using namespace std;

typedef struct employee{
    char name[80];
    int code;
    float sallary;
}emp;

int main(){
    emp e1;
    strcpy(e1.name,"suraj");
    e1.code=101;
    e1.sallary=450.90;

    cout<<"name="<<e1.name<<endl;
    cout<<"code="<<e1.code<<endl;
    cout<<"sallary="<<e1.sallary<<endl;
    return 0;
}