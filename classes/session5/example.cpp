/*  
Lab 5 - 18-June-2024
David Ornelas
*/

#include <iostream>	
#include <fstream>
#include <vector>
#include <algorithm>
using namespace std;


/*
Program to explore the use of a vector to read the contents of a file.
The file contains a list of numbers, one per line
The output of the program is the sum and the average of the numbers in the file.
The program should also print the numbers sorted, exploring the use of sort function and the 3 possible methods of passing the comparison function to the sort function.
Save the sorted numbers in a binary file.
*/

// Function to calculate the sum of the numbers
int sum(vector<int> &nums){ // Pass by reference to avoid copying the vector
	int sum = 0;
	for (int i = 0; i < nums.size(); i++){
		sum += nums[i];
	}
	// nums is a local copy of the vector
	nums.push_back(sum); // Modify the vector to add the sum
	return sum;
}


// Main function
int main(){

	// Open the file
	ifstream file("numbers.txt");
	vector<int> numbers;
	int num;

	// Read the file
	while (file >> num){
		numbers.push_back(num);
	}

	// Close the file
	file.close();

	// Last pos
	int last = numbers.size() - 1;
	// Calculate the sum
	cout << "Sum: " << sum(numbers) << endl;
	
	// Average of the numbers
	double avg = sum(numbers) / last;
	cout << "Average: " << avg << endl;
	
	// Sorted numbers - Changes the original vector
	vector<int> sorted = numbers;
	sort(sorted.begin() + 2, sorted.end() - 3);
	cout << "Sorted numbers: ";
	for (int i = 0; i < sorted.size(); i++){
		cout << sorted[i] << " ";
	}
	cout << endl;

	return 0;
}



