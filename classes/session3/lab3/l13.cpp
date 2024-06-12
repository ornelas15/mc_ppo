/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.13: 
Create and test a new function based on templates that
can replace all the functions of the previous exercise.
*/

#include <iostream>	
using namespace std;

// Template with Multiple Arguments
template <class atype>
double power(atype n, int p = 2){
	double result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

int main(){

	// Call overloaded functions
	double n;
	int p;
	cout << "Enter a number: ";
	cin >> n;
	cout << "Enter a power: ";
	cin >> p;
	cout << "Result: " << power(n, p) << endl;

	return 0;
}



