/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.3
The file /etc/dictionaries-common/words contains a list of words
(in english), one per line. Some of those words have equal 
consecutive letters, such as “accent", "access", "pool", etc.
Develop a program to list and count all those words.  
Suggestion: start by creating the function int 
checkDoubles(const string &w), which returns the number of 
letter pairs found in string w and test it conveniently.
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



