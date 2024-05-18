#include <iostream>
using namespace std;

class largest
{
    int a[3];

public:
    void getdata();
    void putdata();
};
void largest::getdata()
{
    for (int i = 0; i < 3; i++)
    {
        cout << "enter the " << i + 1 << " element=";
        cin >> a[i];
    }
}

void largest::putdata()
{

    int large;
    large = a[0];
    for (int i = 0; i < 3; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }
    cout << "the largest element in array is = " << large;
}

int main()
{
    largest ob;

    ob.getdata();
    ob.putdata();
    return 0;
}