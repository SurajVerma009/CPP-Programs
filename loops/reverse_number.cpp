#include<iostream>
using namespace std;

// int main()
// {
//     int n,reverse=0;
//     cout<<"which number do you want reverse=";
//     cin>>n;
//     for(n;n>0;n=n/10){
//         reverse=(reverse*10)+n%10;
//                                     //    ----->using for loop
//     }
//     cout<<"reverse="<<reverse;
    
//     return 0;
// }

 int main()
{
    int n,reverse=0;
    cout<<"which number do you want reverse=";
    cin>>n;
    while(n>0)
    for(n;n>0;n=n/10){
        reverse=(reverse*10)+n%10;  //    ----->using for loop                              
    }
    cout<<"reverse="<<reverse;
    return 0;
}