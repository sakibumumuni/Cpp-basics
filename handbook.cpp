#include <bits/stdc++.h>
using namespace std;

// This function makes sure that an integer is nver divided by the number 0
int divide () {
	int a, b;
	int c;
	cout << "Enter your digits to divide!!: "; 
	cin >> a >> b;
	if (b != 0) 
	{
		c = a / b;
		cout << c;
	}
	else 
	{
		cout << "Undefined!!"; "\n";
	}
	return a, b, c;
}

// demonstrating that floating point numbers in c++ are imprecisely represented

int perils () {
	double d1 = 1.11 - 1.10;
	double d2 = 2.11 - 2.10;
	cout << "d1 = " << d1 << "\n";
	cout << "d2 = " << d2 << "\n";
	if (d1 == d2)
	{
		cout << "Same\n";
	}
	else 
	{
		cout << "Different\n";
		cout << "d1 = " << setprecision(20) << d1 << "\n";
		cout << "d2 = " << setprecision(20) << d2 << "\n";	}
	return d1, d2;
}


// second indication of the perils in using floating point numbers == operator

int perilTwo ()
{
	double first  = 3.10 - 1.10;
	double second  = 4.10 - 2.10;
	cout << "first = " << first << "\n";
	cout << "second = " << second << "\n";
	if (first == second)
	{
		cout << "They are both the same!!";
	}
	else 
	{
		cout << "They are different!!" << "\n";
		cout << "first  = " << first << setprecision(20) << "\n";
		cout << "second = " << second << setprecision(20) <<  "\n";
	}
	return first, second;

}

int rangecheck (){
	int x;
	cout << "Enter your number: " << "\n";
	cin >> x;
	if (x >= 0)
	{
		cout << "First Check is complete!" << "\n";
		
	}
		if (x <= 10)
		{
			cout << "Last Check is complete!" << "\n";
			cout << "Congrats the conditions have been met!" << "\n";
		}
	else 
	{
		cout << "The conditions have not been met: Abort!!" << "\n";
	}
	return x;
}


long double power () {
	long double p1;
	p1 =  pow(2, 32); "\n";
	cout << p1;
	return p1;
		
}
// the unsigned type can only take 31 bits of data and cannot overflow, else it give a logical error

unsigned unTest (){
	unsigned x = 4294967293;
	cout << "Overflow1 = " << x + 1 << "\n";
	cout << "Overflow2 = " << x + 2 << "\n";
	cout << "Overflow3 = " << x + 3 << "\n";
	return x;
}

/*Using a series of if statements to print 10-bit binary string representing
the binary equivalent of the decimal integer supplied by the user, I use if/else statements
to print the individual digits left to right, essentially assembling the sequence of bits that represents the binary number  */

/*int seriesTest () {
	int s;
	int m;
	cout << "Enter you decimal digit: ";
	cin >> s;
	while (s); 
		if ((m == 0) || (m == 1) ) 
		{
			m = (s % 2);
			cout << (s % 2).append(string((s / 2) % 2 ))s << "\n";	
		}
		else 
		{
			cout << "Abort!!" << "\n";
		}
	return s;

}
*/


// bitwise operations

int bitwise () {
	int e1 = 13;
	int e2 = 14;
	cout << (e1 & e2) << "\n"; // & is the and bitwise operator: manipulates the bits of the digits
	return e1, e2; // thus this function returns 12 instead of 27
}

// showing the bitwise inclusive or || and the exclusive or ^
int bitincOr () {
	int e3 = 13;
	int e4 = 14;
	cout << (e3 | e4) << "\n";
	cout << (e3 ^ e4 ) << "\n";
	cout << (5 << 2 ) << "\n"; // the bitwise lefty shift operation: shifts the first digit the second digit places to the left
	cout << (5 >> 2 ) << "\n";
	cout << (~ e3) << "\n"; // the bitwise negation reverses all the bits of the digit
	return e3, e4;
}

// we use a series of if/else statements to print a 10 bit binary string
int bitstring () {
	int value;
	//Get number from the user 
	cout  << "Enter your decimal value:" << "\n";
	cin >> value;
	if (0 <= value && value < 1024) 
	{
		if (value >= 512)
		{
			cout << 1;
			value %= 512;
		}
		else 
		{
			cout << 0;
		}
		if (value >= 256)
		{
			cout << 1;
			value %= 256;
		}
		else 
		{
			cout << 0;
		}
		if (value >= 128)
		{
			cout << 1;
			value %= 128;
		}
		else 
		{
			cout << 0;
		}
		if (value >= 64)
		{
			cout << 1;
			value %= 64;
		}
		else
		{
			cout << 0;
		}
		if (value >= 32)
		{
			cout << 1;
			value %= 32;
		}
		else 
		{
			cout << 0;
		}
		if (value >= 16)
		{
			cout << 1;
			value %= 16;
		}
		else
		{
			cout << 0;
		}
		if (value >= 8)
		{
			cout << 1;
			value %= 8;
		}
		else 
		{
			cout << 0;
		}
		if (value >= 4)
		{
			cout << 1;
			value %= 4;
		}
		else
		{
			cout << 0;
		}
		if (value >= 2)
		{
			cout << 1;
			value %= 2;
		}
		else
		{
			cout << 0;
		}
	}
	return value;
}

int main () {
	//return divide();
	//return perils();
	//return perilTwo();
	//rangecheck();
	//power();
	//unTest();
	//seriesTest();
	//bitstring();
	//return bitwise();
	bitincOr();
	return 0;
}



