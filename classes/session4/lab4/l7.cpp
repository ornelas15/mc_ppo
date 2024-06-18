/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.7
Implement a program to count the total number of words stored in a text file as well as the number of occurrences of a specific keyword. You should only consider exact matches, i.e. if the keyword is "contained" inside another word it should not be counted. The name of the text file and the keyword are provided by the user.
Test your program with the file "Os Lusíadas" (document 3333 from the Gutenberg project - http://www.gutenberg.org/ebooks/3333).

*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
#include <unordered_map>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){

	// Declare string, int and map variables
	string filename, keyword, word;
	int counttw = 0, countkw = 0;
	unordered_map<string, int> countword;

	// Ask for filename and set default if no input
    cout << "Enter the filename (leave blank for default: 3333.txt): ";
    getline(cin, filename);

    // Add path folder
    string path = "classes/session4/lab4/";
    if (filename.empty()) {
        filename = "3333.txt"; 
    }
    filename = path + filename; 
    
    // Ask for keyword
    cout << "Enter the keyword: ";
    cin >> keyword; 

	// Open file
	ifstream file(filename);
	if (!file.is_open()){
		cout << "Error opening file." << endl;
		return -1;
	}

	// Read file
	 while (file >> word) {
        // Remove punctuation at the end of words
		word.erase(remove_if(word.begin(), word.end(), [](unsigned char c) {
        return ispunct(c); 
    	}), word.end());

        // Convert to lower case
        transform(word.begin(), word.end(), word.begin(), [](unsigned char c) {
        return tolower(c);
    });

        // Count the word
        countword[word]++;
        counttw++;

        // Check if the current word matches the keyword
        if (word == keyword) {
            countkw++;
        }
    }

    cout << "Total number of words: " << counttw << endl;
    cout << "Occurrences of the keyword '" << keyword << "': " << countkw << endl;

	// Close file
    file.close();

	return 0;
}



