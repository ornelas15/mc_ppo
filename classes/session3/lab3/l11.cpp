/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.11: 
Raising a number n to a power p is the same as multiplying n by
itself p times. Write a function called power() that takes a double
value for n and an int value for p, and returns the result as a
double value. Use a default argument of 2 for p, so that if this
argument is omitted, the number n will be squared. 
Write a program that gets values from the user to test this
function.
*/

#include <iostream>	
using namespace std;

double power(double n, int p = 2){
	double result = 1;
	for (int i = 0; i < p; i++){result *= n;}
	return result;
}

int main(){

	// Call power function
	double n;
	int p;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Enter a power: ";
	cin >> p;
	cout << "Result: " << power(n, p) << endl;

	return 0;
}



