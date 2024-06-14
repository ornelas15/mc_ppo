/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.2
Implement a program to count words and count the occurrence of
a specific keyword. You should only consider exact matches, i.e.
if the keyword is "contained" inside another word should not be 
counted. 

The program should start getting from the user a keyword 
and then gets paragraphs (a sentence finishes with the symbol '$')
in an iterative way (the user has to write a sentence with the 
word "End" to finish the program). 

For each introduced sentence, the program should count the 
number of words in the sentence (consider the most common symbols
as separators) and count the number of occurrences of the keyword.
*/

#include <iostream>	
#include <limits>
#include <string>
#include <sstream>
using namespace std;

int main(){

	string keyword;
	string sentence;
	int count_word = 0;
	int count_keyword = 0;

	cout << "Enter a keyword: ";
	cin >> keyword;
	// Clear the buffer to avoid duplicates
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	while (true){
		
		// Read a sentence
		string sentence;
		cout << "Enter a sentence: ";
		// Reads full line of text
		getline(cin, sentence); 

		// Check if the sentence is "End" and break the loop
		if (sentence == "End"){
			break;
		}

		// Count the number of words. 
		stringstream ss(sentence);
		string word;
		while (ss >> word){
			count_word++;
			// Count the number of occurrences of the keyword
			if (word == keyword){
				count_keyword++;
			}
		}
	}

	cout << "Number of words: " << count_word << endl;
	cout << "Number of keyword occurrences: " << count_keyword << endl;                                                                                                                                                                                                                                                                                                                                          

	return 0;
}

