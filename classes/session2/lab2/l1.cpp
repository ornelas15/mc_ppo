/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.1
Implement a program that repeatedly asks for a number and calculates its factorial,
until the user enters 0, at which point it terminates. 
The factorial is calculated by multiplying the original number by all the positive integers smaller than itself. 
Thus the factorial of 5 is 5*4*3*2*1, or 120
*/

#include <iostream>	
#include <iomanip>
using namespace std;


int main(){

	int num, factorial = 1;
	
	while (true) {
	
	cout << "Enter a number: ";
	cin >> num;

	// Calculate the factorial of the number
	for (int i = 1; i <= num; i++) {
		factorial = factorial * i;
	}

	if (num == 0) {		
		cout << "Exiting program..." << endl;
		break;
	}

	cout << "The factorial of " << num << " is " << factorial << endl;
	factorial = 1;

	}
	return 0;
}



