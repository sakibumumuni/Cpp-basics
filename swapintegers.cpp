#include <bits/stdc++.h>
using namespace std;


void swap(int&a, int&b) {
    int temp = a;
    a = b;
    b = temp;
}


void selection_sort(vector<int>&a) {
    int n = a.size();
    for (int i = 0; i < n; i++)
        int small = i;
        for (int j = i + 1; j < n; j++)
            if (a[j] < a[small]) {
                small = j; // found a smaller value
        }
        if (i != small ) {
            swap(a[i], a[j]);
        }
    }

// prints the contents of a vector of integers
void print(const vector<int>&a) {
    int n = a.size();
    cout << '{';
    if (n > 0) {
        cout << a[0]; // print the first element
        for (int i; i < n; i++) {
            cout << ',' << a[i]; // print the rest
        }
    }
    cout << '}';
}

int main () {
    vector<int>list{23, -3, 4, 215, 0, -3, 2, 23, 100, 88, -10};
    cout << "Before: ";
    print(list); "\n";
    selection_sort(list);
    cout << "Afer: ";
    print(list); "\n";
}


