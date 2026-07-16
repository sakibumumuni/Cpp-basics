#include <bits/stdc++.h>
using namespace std;

int close_to_left (const vector<int>&a, int x) {
    int l = 0;
    int r = (int)a.size();
    while (l < r) {
        int m = (r + l) / 2;
        if (a[m] <= x) {
            l = m + 1; // less than query, then left(start is (middle + 1))
        }
        else 
            r = m; // else if it exceeds it, right(end is the middle)
    }   
    return l;
}

int main () {
    int n, k;
    int seek;
    cin >> n >> k;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int q = 0; q < k; q++) {
        cin >> seek;
        cout << (close_to_left(a, seek)) << "\n";
    }
    return 0;
}

