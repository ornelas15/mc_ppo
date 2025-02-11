/*  
Lab 4 - 13-June-2024
David Ornelas
*/

#include <iostream>	
#include <fstream>
#include <vector>
#include <map>
using namespace std;


// Main function
int main(){

	// ----------------------------
	// Example - Writing to a file
	ofstream file("file.txt");

	// ofstream file;
	//file.open("file.txt");
	file << "Hello, World!" << endl;
	file << "David Ornelas" << endl;
	file.close();
	
	// ----------------------------
	// Example - Vector

	vector<int> numbers;
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	numbers.push_back(50);

	for (int i = 0; i < numbers.size(); i++){
		cout << numbers[i] << endl;
	}

	// Accessing elements
	cout << "Size: " << numbers.size() << endl;
	cout << "First element: " << numbers.front() << endl;
	cout << "Last element: " << numbers.back() << endl;
	cout << "Element at position 2: " << numbers.at(2) << endl;

	// .at() generates an exception if the index is out of range - documentation


	// try {
	// 	cout << "Element at position 10: " << numbers.at(10) << endl;
	// }
	// catch (out_of_range &e) {
	// 	cerr << "Out of Range error: " << e.what() << endl;
	// }


	// iterator
	for (vector<int>::iterator it = numbers.begin(); it != numbers.end(); it++){
		cout << *it << endl;
	}

	// Map - key value pairs
	map<char, int> letters;
	letters['a'] = 1;
	letters['b'] = 2;
	letters['c'] = 3;

	cout << letters['a'] << endl;

	// run all elements of the map
	for (pair<char, int> p : letters){
		cout << p.first << " " << p.second << endl;
	}
 
	return 0;
}



