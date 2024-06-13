/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.2
Implement a program to calculate the sum, average, maximum
and minimum of all the real numbers stored in a text file.
Consider that the file is located in the folder where you
execute the program. The name of the file should be asked to
the user. The file should be in the following format 
(one number per line):
*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
using namespace std;


int main(){

	// Ask for file name
	string filename;
	cout << "Enter the name of the file: ";
	cin >> filename;

	// Save on current path folder
	string path = "classes/session4/lab4/";
	filename = path + filename;

	// Open file
	ifstream file(filename);

	// Check if file is open
	if (!file.is_open()) {
		cerr << "Failed to open " << filename << endl;
		return 1;}

	//
	vector<double> numbers;
	double num;
	while (file >> num){
		// Get numbers from file
		numbers.push_back(num);      
	}

	file.close();

	// Calculate sum
	double sum = 0;
	for (int i = 0; i < numbers.size(); i++){
		sum += numbers[i];
	}

	// Calculate average
	double average = sum / numbers.size();

	// Calculate maximum
	double max = numbers[0];
	for (int i = 1; i < numbers.size(); i++){
		if (numbers[i] > max){
			max = numbers[i];
		}
	}

	// Calculate minimum
	double min = numbers[0];
	for (int i = 1; i < numbers.size(); i++){
		if (numbers[i] < min){
			min = numbers[i];
		}
	}

	// Print results
	cout << "Sum: " << sum << endl;
	cout << "Average: " << average << endl;
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	

	return 0;
	
}



