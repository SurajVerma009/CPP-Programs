// setw is used to set the width to display the data

#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()

{

    int a, b, c;
    a = 7, b = 4, c = 79;

    cout << setw(4) << a << "\n";
    cout << setw(6) << b << "\n";
    cout << setw(5) << a << "\n";

    return 0;
    
}
