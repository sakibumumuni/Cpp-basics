#include <iostream>
using namespace std;

/*
- This is a program that allows a user to enter any number of nonnegative
integers. When the user enters a negative value, the program no longer accepts
input, and displays the sum of all the nonnegative values. If a negative 
number is the first entry, the sum is 0

*/

int main () 

{
    int sum = 0;
    int input = 0;
    cout << "Enter a nonnegative integer!" << "\n";
    while (input >= 0 ) // the condition makes sure the body is executed at least once
    {
        cin >> input;
        if (input >= 0)
        {
            sum += input;
            cout << sum << "\n";
        }
        else if (input < 0)
        {
            cout << 0 << "\n";
        }
    }
    return 0;
}