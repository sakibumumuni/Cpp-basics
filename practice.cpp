#include <iostream>
#include <string>
using namespace std;

string studentName () {
	string name = "Sakibu Mumuni.";
	cout << " My name is" << name << "\n";
	return name;
}

int studentAge () {
	int age = 20;
	cout << "I am" << age << "years old." << "\n";
	return age;
}

int studentID () {
	int id = 2253771;
	cout << "My  ID is " << id << "." << "\n";
	return id;
}

int schoolfees () {
	int fees = 7817;
	cout << "My school fees is " << fees << "." << "\n";
	return fees;
}

/*This function is used to show the numbe of items, cost per item, total cost
*/

int items () {
	int itemnumber = 56;
	int costperitem = 355;
	char currency = '$';
	int totalcost = itemnumber * costperitem;
	cout << currency << totalcost; "\n";
	return totalcost;
	
}

/*this function displays the details of a tudents report card.
I will need the student ID, score and the grade
*/

int studentReport (){
	int id;
	cout << "ENTER YOUR STUDENT ID: "; "\n";
	cin >> id;
	int score = 95;
	cout << "YOUR SCORE IS: " << score << "\n";
	char grade = 'A';
	cout << "YOUR GRADE IS: " << grade << "\n";
	return id;
	return score;
	return grade;

}

// The ++ operator increases the value of a variable by 1

int ppop () {
	int x = 45;
	++x;
	cout << x << "\n";
	return x;
}

// The -- operator is used to decrease the value of a variable by 1

int mmop () {
	int y = 67;
	--y;
	cout << y << "\n";
	return y;
}


// a program to count the number of people that enter and when they leave

int counter () {
	int peopleinroom = 0;
	// three people enter the room
	peopleinroom++;
	peopleinroom++; 
	peopleinroom++;

	cout << peopleinroom << "\n";

	//one person leaves the room

	peopleinroom--;

	cout << peopleinroom << "\n";
	return peopleinroom;
}

/* In c++ string is an objecty that contains functions that can perform
cetain operations on strings, for example, ,concatenation strings using the append function
*/
string naming (){
	string firstname = "Sakibu";
	string lastname = "Mumuni";
	string fullname = firstname.append(lastname);
	cout << fullname;
	return fullname;
}

// Getting the length of a string using the .length() function
// the lenght of a string can alsobe gotten using the .size() function, which is just an alias

string stringLenght (){
	string txt = "ABCDEFGHIJKLMNOPQRSTUVWXYS";
	cout << " The lenght of the string is: "  << txt.length(); "\n";
	return txt;
}

// indexing characters in strings using the []
 string myString () {
	string mystring = "Hello";
	cout << mystring[mystring.length() -1]; // this indexes the last letter of the lenght of the string, beacause it is always n-1
	return mystring;
 }

// here i indexed the last character of the string using the size function instead of the length()
 string newString (){
	string newstring ="cephalopoda";
	cout << newstring[newstring.size() -1]; "\n";
	return newstring;
 }

 // changing string characters

 string intro () {
	string duction = "Hello";
	duction[0] = 'J';
	cout << duction; "\n";
	return duction; // this will replace the first character with J
 }

 // indexing using the .at() function

 string stringindex () {
	string stringIndex  = "maximumindex";
	cout << stringIndex.at(stringIndex.length() -1);
	return stringIndex;
 }


int main () {
	studentName();
	studentAge();
	studentID();
	schoolfees();
	items();
	studentReport();
	ppop();
	mmop();
	counter();
	naming();
	stringLenght();
	myString();
	newString();
	intro();
	stringindex();
	return 0;
}





