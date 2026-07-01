/*A program that allows a user to enter any number of non negative 
integers. When the user enters a negative value, the program no longer accepts input
and displays the sum of all the non negative values. If a negative number is the first
entry, the sum is zero. */
#include <bits/stdc++.h>
using namespace std;

int main () {
    int input = 0; // ensure the loop is entered
    int sum = 0; // initialise sum
    
    // request input from user
    cout << "Enter numbers to sum, negative number ends list: ";
    while (input >= 0) { // a negative number exits the loop
        cin >> input; // enter input
        if (input >= 0) {
            sum+=input; // only add is the number is non negative
        }
        cout << "Sum = " << sum << "\n";
    }
    return input;
    return 0;
    
}