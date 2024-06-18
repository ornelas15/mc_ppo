/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.6
Implement a program that simplifies management of several teams of indoor soccer (5 players). For each team, the user has to input the numbers of 5 players (all different - explore the use of the set container).  After  a team has been formed, the program should ask whether the user wants to add another team (the response can be 'y' or 'n'). Suggestion: consider the use of a vector of sets.

*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
using namespace std;


int main(){

	// Ask user for input and store it in a vector
	vector<int> numbers;
	int input;
	cout << "\nProgram to store all numbers entered by the user in a vector. \nEnter 0 to finish." << endl;
	while (input != 0){
		cout << " Enter a number: "; 
		// Check if input is an integer
		if (cin >> input) { 
			// Avoids storing 0 in the vector
			if (input == 0) break; 
			// Add the input to the vector
            numbers.push_back(input);  
        } else {
            cout << " Please enter a valid integer." << endl;
            cin.clear();  
            // Ignore the rest of the incorrect input line
            cin.ignore(numeric_limits<streamsize>::max(), '\n');}}

	// Display the stored numbers in reverse order
	cout << "\nStored numbers in reverse order: " << endl;
	for (int i = numbers.size()-1; i >= 0; i--){
		cout << numbers[i] << endl;
	}

	cout << "\nAverage of the stored numbers: " << endl;
	// Calculate the average of the stored numbers
	double sum = 0;
	for (int i = 0; i < numbers.size(); i++){
		sum += numbers[i];
	}
	cout << sum / numbers.size() << endl;

	return 0;
}



