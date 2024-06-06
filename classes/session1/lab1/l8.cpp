/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
using namespace std;


int main(){

	// Generate a table of multiples of any give number

	// 10 cols and 20 lines -> first 3 lines
	int cols = 10;
	int lines = 3;
	int totalsize = 0;

	totalsize = cols * lines;

	// Ask for a number
	int number;
	cout << "Enter a number: ";
	cin >> number;

	// Print table
	cout << "Generating a table of multiples of " << number << ":" << endl;
	
	// Create table
	for (int i = 1; i <= totalsize; i++) {
		cout << setw(5) << number * i;
		if (i % cols == 0) {
			cout << endl;
		}
	}
	
	return 0;
}



