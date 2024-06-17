/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.4
File school1.csv contains the grades of students in a class. 
Each row has the record of one student and each column has an 
information field. The columns are separated by TAB characters. 
The first row contains a header with the titles of the fields.  
The files school2.csv and school3.csv have the grades of students 
from other classes in the same format.

a) 

*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int checkDoubles(const string &w){
	int count_dups = 0;
	for (int i = 0; i < w.length()-1; i++){
		if (w[i] == w[i+1]){
			count_dups++;
		}
	}
	return count_dups;
}


int main(){

	// Open dictionary file 
	string path = "/etc/dictionaries-common/words";
	
	// Open file
	ifstream file(path);

	// Check if file is open
	if (!file.is_open()) {
		cerr << "Failed to open " << path << endl;
		return 1;}
	
	// Load words from file
	vector<string> words;
	string word;
	while (file >> word){
		// Get words from file
		words.push_back(word);      
	}

	// Count words with consecutive letters
	int count = 0;
	for (int i = 0; i < words.size(); i++){
		if (checkDoubles(words[i]) > 0){
			//cout << words[i] << " - " << checkDoubles(words[i]) << endl;
			count++;
		}
	}

	// Print total count
	cout << "Total words with consecutive letters: " << count << endl;

	// Close file
	file.close();

	return 0;
}



