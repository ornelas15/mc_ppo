/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.12: 
Start with the power() function of the previous exercise,
which works only with type double. Create a series of overloaded
functions with the same name that, in addition to double,
also work with types char, short, int, long, and float. 
Write a program that exercises these overloaded functions with 
all argument types.
*/

#include <iostream>	
using namespace std;

// Overloaded power function
double power(double n, int p = 2){
	double result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

char power(char n, int p = 2){
	char result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

short power(short n, int p = 2){
	short result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

int power(int n, int p = 2){
	int result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

long power(long n, int p = 2){
	long result = 1;
	for (int i = 0; i < p; i++){result = result*n;}
	return result;
}

float power(float n, int p = 2){
	float result = 1;
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
	cout << "Double Result: " << power(n, p) << endl;
	n = char(n);
	cout << "Char Result: " << power(n, p) << endl;
	n = short(n);
	cout << "Short Result: " << power(n, p) << endl;
	n = int(n);
	cout << "Int Result: " << power(n, p) << endl;
	n = long(n);
	cout << "Long Result: " << power(n, p) << endl;
	n = float(n);
	cout << "Float Result: " << power(n, p) << endl;


	return 0;
}



