/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.8: 
Write a function that returns a string corresponding to the
binary representation of a positive integer number. 
Use it in a program which requests that value to the user. 
Do not use loops.
*/

#include <iostream>	
#include <bitset>
using namespace std;

string integerToBinary(int num) {
    bitset<8> bits(num); 
    return bits.to_string();
}

int main(){

	int num;
	cout << "Enter a positive integer: ";
	cin >> num;

	if (num < 0) {
		cout << "Invalid input. Please enter a positive integer." << endl;
		return 1;
	}

	//Erase leading zeros
	int i = 0;


	cout << "Binary representation: " << integerToBinary(num) << endl;


	return 0;
}



