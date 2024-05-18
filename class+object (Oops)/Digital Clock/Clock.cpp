#include <iostream>
using namespace std;

class clock
{
    int h, m, s;

public:
    void getdata();
    void putdata();
};
void clock::getdata()
{
    cout << "enter the begining hour=";
    cin >> h;
    cout << "enter the begining minute=";
    cin >> m;
    cout << "enter the begining second=";
    cin >> s;
}
void clock::putdata()
{

    while (1)
    {
        system("cls");
        cout << "clock-->";
        cout << h << ":" << m << ":" << s;

        _sleep(1000);

        s++;
        if (s >= 60)
        {
            m++;
            s = 0;
        }
        else if (m >= 60)
        {
            h++;
            m = 0;
        }
        else if(h>=24){
            h=0;
           
        }
       
    }
}

int main()
{
    clock ob;
    ob.getdata();
    ob.putdata();
    return 0;
}
