#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int guess, no_of_guesses = 1;
    srand(time(0));
    int number = rand() % 100 + 1;

    do
    {
        cout << "computer alerady take a number between 1 to 100 then you guess which number cumputer has taken=";
        cin >> guess;
        if (guess > number)
        {
            cout << "LOWER NUMBER PLEASE!" << endl;
        }
        else if (guess < number)
        {
            cout << "HIGHER NUMBER PLEASE!" << endl;
        }
        else
        {
            cout << "YOU GUESSES IT IN " << no_of_guesses << " ATTEMPTS" << endl;
        }
        no_of_guesses++;
    } while (guess != number);
    return 0;
}