/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
using namespace std;

// Function sum 2 fractions from user input
pair<int, int> sum_frac(int num1, int den1, int num2, int den2){

	int num, den;

	num = num1*den2+num2*den1;
	den = den1*den2;

	return make_pair(num, den);
}; 
	

int main(){
	
	int num1, num2, den1, den2;
	char dummy;
	int num, den;

	cout << "\n" << "Enter two fractions to sum: " << endl
	<< "\n" << " Fraction 1: ";
	cin >> num1 >> dummy >> den1;
	cout << "\n" << " Fraction 2: ";
	cin >> num2 >> dummy >> den2;

	pair<int, int> frac= sum_frac(num1, den1, num2, den2); 
	
	cout << "\n" << "The sum of the fractions is: " 
	<< frac.first << "/" << frac.second << endl;

	return 0;
}



