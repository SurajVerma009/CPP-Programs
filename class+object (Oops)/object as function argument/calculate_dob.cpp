#include <iostream>
using namespace std;

class dob
{
    int d, m, y;
    int d2 = 28, m2 = 1, y2 = 2023;

public:
    void input();
    void output();
    void age(dob);
};
void dob::input()
{
    cout << "enter the day=";
    cin >> d;
    cout << "enter the month=";
    cin >> m;
    cout << "enter the year=";
    cin >> y;
}
void dob ::output()
{
    cout << "your correct age" << endl;
    cout << "Year=" << y << endl;
    cout << "Month=" << m << endl;
    cout << "Day=" << d << endl;
}

void dob::age(dob aa)
{
    if(d2<d){
        d2=d2+30;
        d=d2-d;
        m2=m2-1;
    }
    else{
      d=d2-d;
    }
    if(m2<m){
        m2=m2+12;
        m=m2-m;
        y2=y2-1;
    }
    else{
        m=m2-m;
    }
    y=y2-y;
}

int main()
{
    dob aa;
    aa.input();
    aa.age(aa);
    aa.output();
    return 0;
}