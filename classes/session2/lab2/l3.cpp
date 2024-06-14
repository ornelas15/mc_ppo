/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.3
Create a four-function calculator for fractions. 
The program should ask the user to enter a fraction, an operator,
and another fraction. It should then carry out the specified
arithmetical operation: adding, subtracting, multiplying, or 
dividing the two fractions. Use a switch statement to select 
the operation. Finally, display the result. When it finishes 
the calculation, the program should ask whether the user wants 
to do another calculation. The response can be 'y' or 'n'.

Here are the formulas for the four arithmetic operations applied 
to fractions:

Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*d) / (b*c)

*/

#include <iostream>	
using namespace std;

// Function formulas
int addition(int a, int b, int c, int d){
	return (a*d + b*c) / (b*d);}
int subtraction(int a, int b, int c, int d){
	return (a*d - b*c) / (b*d);}
int multiplication(int a, int b, int c, int d){
	return (a*c) / (b*d);}
int division(int a, int b, int c, int d){
	return (a*d) / (b*c);}

// Function calculator 
int main(){

	// Enter two fractions and an operator
	int a, b, c, d;
	char op, response = 'y';

	// Loop to do calculations
	while (response == 'y'){
		// Ask the user to enter a fraction
		cout << "Enter a fraction (a/b): ";
		cin >> a; cin.ignore();	cin >> b;

		// Ask the user to enter an operator
		cout << "Enter an operator (+, -, *, /): ";
		cin >> op;

		// Ask the user to enter another fraction
		cout << "Enter another fraction (c/d): ";
		cin >> c; cin.ignore();	cin >> d;

		// Switch statement to select the operation
		switch (op){
			case '+':
				cout << "Result: " << addition(a, b, c, d) << endl;
				break;
			case '-':
				cout << "Result: " << subtraction(a, b, c, d) << endl;
				break;
			case '*':
				cout << "Result: " << multiplication(a, b, c, d) << endl;
				break;
			case '/':
				cout << "Result: " << division(a, b, c, d) << endl;
				break;
			default:
				cout << "Invalid operator" << endl;
		}

		// Ask the user if they want to do another calculation
		cout << "Do you want to do another calculation? (y/n): ";
		cin >> response;
	}

	return 0;
}

