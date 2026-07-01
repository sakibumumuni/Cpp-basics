#include <bits/stdc++.h>
using namespace std;
/*
binary search (a, seek)
- Returns the index of element seek in vector a;
- returns -1 is seek is not an element of a
- a is the vector to search; a's contents must be sorted in ascending order
- seek is the element to find*/

int binary_search (const std::vector<int>&a, int seek) {
    cin << n, k; // reads the length of array and size of query
    int first = 0; // initially the first position
        last  = a.size() - 1; // initially the last position
        mid; // the middle of the vector
    while (first <= last) {
        mid = first + (last - first + 1) / 2; // calculates the middle element
        if (a[mid] == seek)
            return mid; // found it
            cout << "YES\n";
        else if (a[mid] > seek)
            last  = mid - 1; // continue with first half
            first = mid + 1; // continue with the second half
            cout << "YES\n";
        else 
            cout << "NO\n";
    }
    return -1; // not there
    return 0;

}