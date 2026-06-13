#include <iostream> 
using namespace std;

int myNumber () {
	int myNum = 23;
	return myNum;
}

int doufloat () {
	double myFloat = 3.12;
	return myFloat;
}

int charType () {
	char myChar = 'D';
	return myChar;
}

int changingVar () {
	int myDigit = 19;
	myDigit = 26; // changing variables
	return myDigit;
}

int myBoolean () {
	bool mybool = true;
	return mybool;
}

string  myString () {
	string mytext = "Hello, World!"; //Cannot use int for this function because it is a string
	return mytext;
}

int displayAge () {
	int myAge = 20;
	//string declar = "I am" + to_string(myAge) +  "years old!";
	//return declar;
	cout << "I am " << myAge << "years old!" << "\n";
	return myAge;
 }

int addVariables () {
	int x = 34;
	int y = 54;
	int sum = x + y;
	return sum;
}

//declaring many variables of the same type

int manyVariables () {
	int x = 45, y = 78, z = 84;
	int product = x * y * z;
	return product;
}

//declaring same value to many variable

int manytoone () {
	int a, b, c;
	a = b = c = 657;
	int summation =  a + b + c;
	return summation;
}

//assigning constants: a constant must always be assignmed a value like the below

int consAssignment () {
	const int metrespersecond = 60;
	return metrespersecond;
}

// inputing values using cin
/*
int inputValues () {
	cout << "Type a number: "; //type a number and press enter
	cin >> x; // Get user input from the keyboard
	cout << "Your number is: " << x; //display the inmput value
} 
*/

int inputValues () {
	int x;
	cout << "Type your number: "; /* this is just a label for the human
	So when I insert a new line ("\n") at the end of the is line of code, the input
	prompt moves to the next line in terminal*/
	cin >> x; // this is the line that actually takes the input 
	cout << "Your number is: " << x;
	return x;
}

/*Creating a simple calculator: The user inputs two values, 
then we print out the output*/

int myCalculator () {
	int firstnum;
	cout << "Enter the first number: ";
	cin >> firstnum;
	int secondnum;
	cout << "Enter the second number: ";
	cin >> secondnum;
	cout << "The sum of the numbers is: ";
	int sumofnums = firstnum + secondnum;
	cout << sumofnums;
	return sumofnums;
}

// this block is to return the float type of the big numbver 35e3
float f () {
	float f1 = 35E3; "\n";
	cout << f1; "\n";
	return f1;
}

// this block is to return the double type of the big number 12E4
double d () {
	double d1 = 12E4; "\n";
	cout << d1; "\n";
	return d1;
}


int main() {
	cout << "Hello, my name is Sakibu and I am the best! \n";
	cout << myNumber() << "\n"; //calling the function myNumber into main
	cout << changingVar() << "\n";
	cout << doufloat() << "\n";
	cout << charType() << "\n";
	cout << myBoolean() << "\n";
	cout << myString() << "\n";
	displayAge(); // I already used cout in the function
	cout << addVariables() << "\n";
	cout << manyVariables() << "\n";
	cout << manytoone() << "\n";
	cout << consAssignment() << "\n";
	inputValues(); // similar to the circumstances in the displayAge() function
	myCalculator();
	f();
	d();
	return 0; 
}





