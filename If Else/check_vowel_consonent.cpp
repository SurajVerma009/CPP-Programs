#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    char ch;
    cout<<"enter any aplhabet=";
    cin>>ch;

    if(ch==97||ch==101||ch==105||ch==111||ch==117){
        cout<<"this is a vowel";
    }
    else{
        cout<<"this is a cosonent";
    }
    return 0;
}