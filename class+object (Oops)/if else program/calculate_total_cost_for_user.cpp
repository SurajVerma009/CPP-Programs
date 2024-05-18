// A shop give discount of 10% if the cost of purchased quantity is more than 1000
// one unit will cost=100

#include<iostream>
using namespace std;

class total_cost{
      int quantity;
      public:void getdata();
             void putdata();
};
void total_cost::getdata(){
    cout<<"enter quantity=";
    cin>>quantity;
}
void total_cost::putdata(){
    int price,actual_pay,one_unit=100;
    float discount_money;

    price=quantity*one_unit;
    cout<<"cost_price="<<price<<endl;

    if(price>1000){
    discount_money =(price*0.1);
    actual_pay=price-discount_money;
    cout<<"your cost price is greater than 1000 so you receive 10% discount.after discount you can only pay "<<actual_pay;
    }
    else{
        cout<<"your cost price is not greater then 1000 so you pay total money="<<price;
    }
}
int main()
{
    total_cost ob;
    ob.getdata();
    ob.putdata();
    return 0;
}