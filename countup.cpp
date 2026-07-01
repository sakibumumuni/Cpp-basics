#include <bits/stdc++.h>
using namespace std;

int main() {
    char input; // the users choice
    int count = 0; // the current count
    bool done = false; // we are not done
    while (!done) { // while done is false, initialiser of the whole loop
        //print the current value of count
        cout << count << "\n";
        cout << "Please enter \"Y\" to continue or \"N\" to quit: ";
        cin >> input;
        //check for bad input
        if (input != 'Y' && input != 'N' && input != 'y' && input != 'n') {
            cout <<"It is not a valid choice!" << "\n";
        }
        else if (input == 'Y' || input == 'y') {
            count++; //keep counting
        }
        else if (input == 'N' || input == 'n') {
            done = true;// quit the loop
        }
    }
    return 0;
}