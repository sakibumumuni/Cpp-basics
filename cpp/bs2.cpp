#include <bits/stdc++.h>
using namespace std;

int binary_algorithm (const vector<int>&a, int seek) { // seek is the number i am looking for
    int first = 0;
    int last = (int)a.size() - 1;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (a[mid] == seek){ 
            return true;
        } 
        else if (a[mid] > seek) {
            last = mid - 1; // search left half
    }
        else 
            first = mid + 1; // search right half
    }
    return false;
}

int main () {
    int seek;
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int q = 0; q < k; q++) {
        cin >> seek;
        cout << (binary_algorithm(a, seek) ? "YES" : "NO") << "\n";
    }
    return 0;
}