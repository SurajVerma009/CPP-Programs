#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int a1, a2, a3;

    cout << "enter the angle=";
    cin >> a1;

    cout << "enter the angle=";
    cin >> a2;

    cout << "enter the angle=";
    cin >> a3;

    int sum = a1 + a2 + a3;

    if (sum == 180)
    {
        cout << "triangle is valid";
    }
    else
    {
        cout << "triangle is not valid";
    }

    return 0;
}
