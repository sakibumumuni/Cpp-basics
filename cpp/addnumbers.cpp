#include <iostream>
using namespace std;

/*
- This is a cpp script that adds integers
- continues for all integer values
*/

int main () 
{
    int sum, input = 0; // initialise the sum and input
    cout << "Enter your integer values: " << "\n";
    while (cin >> input) // while input??
    {
        sum += input;
        cout << "Sum = " << sum << "\n";
    }
    return 0;
}