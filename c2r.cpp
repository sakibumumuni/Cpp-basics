#include <bits/stdc++.h>
using namespace std;

int close_to_right (const vector<long long>&a, long long x) {
    int l = 0;
    int r = (int)a.size();
    while (l <  r) {
        int m = (l + r) / 2;
        if (a[m] >= x) {
            r = m;
        }
        else 
            l = m + 1;
    }
    return r + 1;
}

int main () {
    int n, k;
    long long seek;
    cin >> n >> k;
    vector<long long >a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int q = 0; q < k; q++) {
        cin >> seek;
        cout << (close_to_right(a, seek)) << "\n";
    }
    return 0;
}