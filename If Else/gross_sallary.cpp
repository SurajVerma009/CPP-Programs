//   Basic sallary<=10000---> HRA=20%,DA=80%
//   Basic sallary<=20000--->:HRA=25%,DA=90%
//   Basic sallary>20000--->HRA=30%,DA=95%

#include <iostream>
#include <conio.h>

using namespace std;

int main()

{
    int basic_sallary;
    float hra, da;
    cout << "enter your sallary=";
    cin >> basic_sallary;

    if (basic_sallary >= 10000)
    {
        hra = basic_sallary * 0.2;
        da = basic_sallary * 0.8;
    }
    if (basic_sallary >= 20000)
    {
        hra = basic_sallary * 0.25;
        da = basic_sallary * 0.9;
    }
    if (basic_sallary >= 10000)
    {
        hra = basic_sallary * 0.3;
        da = basic_sallary * 0.95;
    }
    cout << "HRA=" << hra << endl;
    cout << "DA=" << da << endl;

    float gross_sallary;
    gross_sallary = basic_sallary + hra + da;

    cout << "YOUR GROSS SALLARY=" << gross_sallary;
    return 0;
}