#include <iostream>
using namespace std;

/*
- This is a snippet that prompts a user to enter 'y' or 'Y' to proceed counting
in increments of 1 and 'n' or 'N' to Abort.
- When a user click on any other character apart from 'n', 'N', 'y' or 'Y', there
is a message display which says "Bad input!"
*/

int main () 
{
    char x;
    int counter;
    while (counter >= 0)
    {
        cout << "Enter 'y' or 'Y' to continue and 'n' or 'N' to abort!!" << "\n";
        cin >> x;
        if (x == 'y' || x == 'Y')
        {
            counter++;
            cout << counter << "\n";
        }
        else if (x == 'n' || x == 'N')
        {
            cout << "Abort!!" << "\n";
            return false;
        }
        else 
        {
            cout << "Bad input!!" << "\n";
        }
    }
    return 0;
}