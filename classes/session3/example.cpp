/*  
Lab 3 - 12-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
#include <string>
using namespace std;

// Sum example
int sum (int a, int b){cout << "Sum of " << a << " + " << b << " = " << a + b << endl;return a + b;}
// Print Number example
void printNum(int n){cout << "Number: " << n << endl;}
// Read Key example
int readKey(void){int key;cout << "Enter a number: ";cin >> key;return key;}

// Void Function Parameters example
void printStringVal(string s = "default"){cout << "String: " << s << endl;}
void printStringRef(string &s){cout << "String Ref: " << s << endl;}
void printStringPtr(string *s){cout << "String Ptr: " << *s << endl;}

void printStringExample(int n, string s = "test"){
	for (int i = 0; i < n; i++){
		cout << s << endl;
	}
}

int main(){

	// ----------------------------
	// Example - Difference between reference and pointer
	cout << "Hello, World!" << endl;
	string name = "David";
	string &ref = name;
	string *ptr = &name;
	cout << name << " " << ref << " " << *ptr << endl;

	// Example - Functions
	int s =	sum(2, 3);
	cout << "Sum: " << s << endl;
	printNum(s);

	// Example - Read key
	//int a = readKey();
	//int b = readKey();

	// Call printStringVal, printStringRef, printStringPtr
	string str = "Ronnie!";
	printStringVal(str);
	printStringRef(str);
	printStringPtr(&str);
	printStringVal();
	printStringExample(3, "Hello");
	printStringExample(3);

	//


	
	return 0;
}



