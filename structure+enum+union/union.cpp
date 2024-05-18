#include<iostream>
#include<conio.h>

using namespace std;
union info{
    int car;
    char van;
    float dj;

};

int main()
{
      union info massy;
      massy.van='q'; 
      
 //    --->>at the time we can use only ona data type
     
     cout<<massy.van;

     return 0;
}