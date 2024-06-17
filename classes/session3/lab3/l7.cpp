/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.7: 
Write a function which determines how many digits has an 
integer positive number. Use it in a program which requests
that value to the user. Do not use loops.
*/

#include <iostream>	
#include <cmath>
using namespace std;

void countDigits(int N){
	int num_digits = 0;
	if (N < 0){
		cout << "Please enter a positive number." << endl;
	}
	else{
		num_digits = to_string(N).length();
		cout << "The number has " << num_digits << " digits." << endl;
	}
}

int main(){

	int N;
	cout << "Enter a positive number: ";
	cin >> N;
	countDigits(N);

	return 0;
}



