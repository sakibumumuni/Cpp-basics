#include <bits/stdc++.h>
using namespace std;

int binary_search_present (const vector<int>&a, int seek){
    int first = 0;
    int last = (int)a.size() - 1;
    while (first <= last) {
        int mid = (first + last) / 2;
        if (a[mid] == seek) {
           return true;
        }
        else if (a[mid] > seek)
            last = mid - 1; // answer is in the left half
        else
            first = mid + 1; // answer is in the right half
    }
    return false;
}

int main() {
    int n, k;
    int seek;
    cin >> n >> k;
    vector<int> a(n);
    for (int i = 0; i < n; i++) // builds up the array with the input of the problem
        cin >> a[i];
    for (int q = 0; q < k; q ++) {  // checks up the queries and checks if seek is present for eack query
        cin >> seek;
        cout << (binary_search_present(a, seek) ? "YES" : "NO") << "\n";
}
    return 0;
}