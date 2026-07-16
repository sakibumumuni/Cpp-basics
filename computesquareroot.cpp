#include <iostream>
// a program that computes the square root of a number supplied

int main (
    double input;
    //get the value from the user
    cout << "Enter the number";
    cin >> input;
    double diff;
    // compute the provisional square root
    double root = 1.0;
    do {
        // loop until the provisional root
        // loop is close enough to the actual root
        root = (root + input/root) / 2.0;
        cout << "root is " << root << "\n";
        //how bad is the approximation?
        diff = root * root - input;
    }

    while (diff > 0.0001 || dif < -0.0001 );

    // report approximate square root
    cout << "Square root of " << input << " = " << root << "\n";
     
)