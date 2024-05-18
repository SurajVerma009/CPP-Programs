#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    char a = 'A';
    char *ptr = &a;
    cout << "the size of int is=" << sizeof(int) << endl;
    cout << "the size of float is=" << sizeof(float) << endl;
    cout << "the size of char is=" << sizeof(char) << endl;
    cout << "the size of double is=" << sizeof(double) << endl;
    cout << "the size of long double is=" << sizeof(long double) << endl;
    cout << "the size of string is=" << sizeof(string) << endl;
    cout << "the size of ptr is=" << sizeof(ptr) << endl;
    return 0;
}