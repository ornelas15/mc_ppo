/*  
Lab 2 - 06-June-2024
David Ornelas

Ex.4: 
Consider the following tasks regarding string manipulation. Each 
task should be implemented using a function following the provided declaration.
	a) calculate the total number of alphabetic characters in a string
		int count_alpha (const string &s)

	b) calculate the number of lowercase and uppercase characters of a string
		int count_lowers (const string &s)
		int count_uppers (const string &s1)

	c) indicate (print) whether the two strings are equal (or what is the greater one, i.e., “comes after the other”)
void equals_or_greater (const string &s1, const string &s2)

	d) convert a string to the corresponding one with lowercase characters
string tolower (const string &s1)

	e) replace in a string all occurrences of multiple spaces followed by a single space
string replace (const string &s1)

	f) capitalize the first letter of each word the string
string capitalize (const string &s1)

	g) indicate whether a string is a palindrome or not. consider only alphabetic characters
bool ispalindrome (const string &s1)
*/

#include <iostream>	
#include <sstream>
#include <string>
#include <cctype>
#include <algorithm>
#include <limits>
using namespace std;

// calculate the total number of characters in a string
int count_alpha (const string &s){
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{if (isalpha(s[i])){count++;}}
	return count;}

// calculate the number of lowercase characters of a string
int count_lowers (const string &s){
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{if (islower(s[i])){count++;}}
	return count;}

// calculate the number of uppercase characters of a string
int count_uppers (const string &s){
	int count = 0;
	for (int i = 0; i < s.size(); i++)
	{if (isupper(s[i])){count++;}}
	return count;}

// indicate (print) whether the two strings are equal
void equals_or_greater (const string &s1, const string &s2){
	if (s1 == s2){cout << "Strings are equal" << endl;}
	else if (s1 > s2){cout << "String 1 is greater" << endl;}
	else{cout << "String 2 is greater" << endl;}}

// convert a string to the corresponding one with lowercase 
string tolower (const string &s1){
	string s2 = s1;
	transform(s2.begin(), s2.end(), s2.begin(), 
	[](unsigned char c){return tolower(c);});
	return s2;}

// replace in a string all occurrences of multiple spaces followed by a single space
string replace (const string &s1){
	string s2 = s1;
	for (int i = 0; i < s2.size(); i++){
		if (s2[i] == ' ' && s2[i + 1] == ' '){
			s2.erase(i, 1);
			i--;
		}
	}
	return s2;}                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            

// capitalize the first letter of each word of the string
string capitalize (const string &s1){
	string s2 = s1;
	for (int i = 0; i < s2.size(); i++){
		// first word and words after space
		if (i==0 || s2[i-1] == ' '){
			s2[i] = toupper(s2[i]);
		}
	}
	return s2;}

// indicate whether a string is a palindrome or not. 
bool ispalindrome (const string &s1){
	string s2 = s1;
	// Remove non-alphabetic characters
	s2.erase(remove_if(s2.begin(), s2.end(), [](char c){return !isalpha(c);}), s2.end());
	// Convert to lowercase
	transform(s2.begin(), s2.end(), s2.begin(), 
	[](unsigned char c){return tolower(c);});
	// Check if palindrome
	string s3 = s2;
	reverse(s3.begin(), s3.end());
	return s2 == s3;}


int main(){

	// Ask user for what type of function to test
	cout << "What function would you like to test?" << endl;
	cout << "\n  a) count chars of a string" << endl;
	cout << "\n  b) count lowers of a string" << endl;
	cout << "\n  c) count uppers of a string" << endl;
	cout << "\n  d) find equals or greater strings" << endl;
	cout << "\n  e) convert string to lowercase" << endl;
	cout << "\n  f) replace all multiple spaces by a single space" << endl;
	cout << "\n  g) capitalize each word (1st letter) of string" << endl;
	cout << "\n  h) check if string is a palindrome" << endl;

	// Get user input
	char choice;
	cout << "\n\t Enter choice: ";
	cin >> choice;
	// Clear buffer
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	// Test the function
	string s, s2;
	switch (choice){
		case 'a':
			// Test a) function
			cout << "Enter a string: ";
			cin >> s;
			cout << "Number of alphabetic characters: " << count_alpha(s) << endl;
			break;
		case 'b':
			// Test b) function
			cout << "Enter a string: ";
			cin >> s;
			cout << "Number of lowercase characters: " << count_lowers(s) << endl;
			break;
		case 'c':
			// Test c) function
			cout << "Enter a string: ";
			cin >> s;
			cout << "Number of uppercase characters: " << count_uppers(s) << endl;
			break;
		case 'd':
			// Test d) function
			cout << "Enter string: ";
			cin >> s;
			cout << "Enter another string: ";
			cin >> s2;
			equals_or_greater(s, s2);
			break;
		case 'e':
			// Test e) function
			cout << "Enter a string: ";
			cin >> s;
			cout << "Lowercase string: " << tolower(s) << endl;														
			break;
		case 'f':
			// Test f) function
			cout << "Enter a string: ";
			getline(cin, s);
			cout << "String with single spaces: " << replace(s) << endl;
			break;
		case 'g':
			// Test g) function
			cout << "Enter a string: ";
			getline(cin, s);
			cout << "Capitalized string: " << capitalize(s) << endl;
			break;
		case 'h':
			// Test h) function
			cout << "Enter a string: ";
			getline(cin, s);
			if (ispalindrome(s)){cout << "String is a palindrome" << endl;}
			else{cout << "String is not a palindrome" << endl;}
			break;
		default:
			cout << "Invalid choice" << endl;
			break;
	}

	return 0;
}



