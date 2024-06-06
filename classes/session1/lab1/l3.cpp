/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
using namespace std;

// Function to convert temperature from Fahrenheit to Celsius based on user input
int func(float a){
	float b;
	if (a == 1){
		cout << "Enter temperature in Fahrenheit: ";
		cin >> b; // read a number 
		cout << "In Celsius (ºC): " << 5.0/9.0 * (b - 32) << endl;
	}
	else if (a == 2){
		cout << "Enter temperature in Celsius: ";
		cin >> b; // read a number
		cout << "In Fahrenheits (ºF): " << 9.0/5.0 * b + 32 << endl;
	}
	else{
		cout << "Invalid option, please choose between 1 or 2!" << endl;
	}
	return 0;
}; 
	

int main(){
	
	float a;

	cout << "\n" << "Type 1 to convert Fahrenheit to Celsius, "
	<< "\n" << "     2 to convert Celsius to Fahrenheit: ";
	cin >> a; // read either 1 or 2 
	func(a); 
	
	return 0;
}



