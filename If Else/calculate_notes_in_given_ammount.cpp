#include<iostream>
#include<conio.h>

using namespace std;

int main()
{
    int ammount,notes,no_of_notes;
    cout<<"enter the ammount plz=";
    cin>>ammount;
    cout<<"enter the notes no=";
    cin>>notes;
    
    if(notes==10){
        no_of_notes=ammount/notes;
    }
    if(notes==20){
        no_of_notes=ammount/notes;
    }
    if(notes==50){
        no_of_notes=ammount/notes;
    }
    if(notes==100){
        no_of_notes=ammount/notes;
    }
    if(notes==200){
        no_of_notes=ammount/notes;
    }
    if(notes==500){
        no_of_notes=ammount/notes;
    }
    if(notes==2000){
        no_of_notes=ammount/notes;
    }

    cout<<"In this ammount no of notes is="<<no_of_notes;
    return 0;
}
