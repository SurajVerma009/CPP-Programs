#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int arr[3], temp;

    for (int i = 0; i < 3; i++)
    {
        cout << "enter the " << i << " element of an array=";
        cin >> arr[i];
    }
    temp = arr[0];
    arr[0] = arr[2];
    arr[2] = temp;

    cout << "arr[0]=" << arr[0] << endl;
    cout << "arr[1]=" << arr[1] << endl;
    cout << "arr[2]=" << arr[2] << endl;

    return 0;
}