// static data member-->static data member means static variable
// static varriable ki value always intilized to zero(0)
// iski visiability pure program me hoti h
// ye kisi bhi object ka part nhi hota h
// iski value sbhi object ke liye same hoti h

#include <iostream>
#include <conio.h>

using namespace std;

class demo
{
    int a, b;
    static int c;

public:
    void getdata();
    void putdata();
};

void demo::getdata()
{
    cout << "enter two number=";
    cin >> a >> b;
    // c++;
}
void demo::putdata()
{
    cout << "The first number is=" << a << "\n The second number is =" << b << endl;
    cout << "c=" << c << endl;
}

int demo::c;  //--->very imporatant for static

int main()
{
    demo aa, bb;
    aa.getdata();
    bb.getdata();
    aa.putdata();
    aa.putdata();
    return 0;
}
