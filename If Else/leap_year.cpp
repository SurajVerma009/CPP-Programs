#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int year;
    cout<<"enter the year=";
    cin>>year;

    if(year%4==0||year%400==0||year%100==0){
        cout<<"this year is leap year";
    }
    else{
        cout<<"this year is not a leap year";
    }
    return 0;
}