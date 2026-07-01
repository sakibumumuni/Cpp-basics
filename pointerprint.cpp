#include <bits/stdc++.h>
using namespace std;

int main () {
    int a[] = {2, 3, 4, 6, 8, 10, 12, 14, 16, 18, 20}, *p;
    p = &a[0]; // p points to the first element of array a

    // print out the contents of the array
    for (int i = 0; i < 11; i++) {
        cout << *p << " "; // print the element p points to
        p++; "\n"; // increment p so it points to the next element
    }
} 