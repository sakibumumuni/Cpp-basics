#include <bits/stdc++.h>
using namespace std;

/*The relationship between degrees Celsius and Fahrenheit can 
 ba expressed as    C = 5/9(F-32): Given a temperature in 
 degrees fahrenheit, the corresponding temperature in degree celsius
 can be computed
*/


int FahrenheitToCelsius() {
    int F;
    int C;
    cout << "Enter your temperature in Fahrenheit: ";
    cin >> F;
    C = (F - 32) * 5/9;
    cout << "Your temperature in degree celsius is: " << C << setprecision(2) << "\n";
    return C, F;
}


/*This program receives two mathematical points and prints
ou the midpoint of a line
*/

int midpoint () {
    int x1, x2;
    int y1, y2;
    int m;
    int n;
    cout << "Enter the values of x1 and x2: ";
    cin >> x1;
    cin >> x2;
    cout << "Enter the values of y1 and y2: ";
    cin >> y1;
    cin >> y2;
    m = (x1 + x2) / 2; 
    n = (y1 + y2) / 2;
    cout << "( " << m << ", " << n << " )" << "\n";
    return x1, x2, y1, y2, m, n;
}

// implementin iteration (while loop)
/*The while lop continually checks the condition and 
continues to iterate through the statemen each time
*/

int counting () {
    int count = 0;
    while (count < 10000) 
    {
        count++ ; 
        cout << count << "\n";
    }
    return count;
}

int main (){
    //return midpoint();
    //return FahrenheitToCelsius();
    return counting();
    return 0;
}