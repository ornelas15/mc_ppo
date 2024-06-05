/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
using namespace std;

int g; // global variable

int main(){
	
	// Class examples:

	// variable declaration
	int number = 0;
	int n1, n2, n;
	char key;
	
	// variable initialization
	number = 5;
	n1 = 10;
	n2 = 20;

	// variable assignment
	g = number + 1;
	n = n1 + n2;

	// << operator sends to cout the text and variables 
	//with a new line (endl) at the end of the line: 
	cout << "\nHello, World!" << endl;
	cout << g << endl;
	cout << n << endl;

	// Wait for user input
	cout << "Press Key: ";
	cin >> key; // read a character from the keyboard
	cout << "Key pressed: " << key << endl; // display key pressed
	
	return 0;

}


