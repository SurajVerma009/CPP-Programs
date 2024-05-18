#include<iostream>
using namespace std;

class atm{
      float balance,y;
     char user;
      public:void getdata();
             void putdata();
};
void atm::getdata()
{
    cout<<"How much Amount do you want to open your account=";
    cin>>balance;

     cout<<"enter c for credit\n";
     cout<<"enter d for Debit\n";
    cout<<"enter b for balance check\n";
    cin>>user;
}
void atm::putdata()
{
    switch (user)
    {
    case 'c':
        cout<<"How much rupees do you want credit=";
        cin>>y;
        cout<<" Your Account Balance="<<balance+y;
        break;
     
     case 'd':
     cout<<"How much rupees do you want debit=";
     cin>>y;
     if(y>balance){
        cout<<" Oops Insufficiant Balance!";
     }
     else{
        cout<<"After Debit Your Balance ="<<balance-y;
     }
      break;
     case 'b':
     cout<<"Account Balance="<<balance;
      break;

    default:
       cout<<"oops wrong key!";
        break;
    }
}
int main()
{
    atm ob;
    ob.getdata();
    ob.putdata();
    return 0;
}