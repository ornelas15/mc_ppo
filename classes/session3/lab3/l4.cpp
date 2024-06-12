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
using namespace std;

int count_alpha (const string &s){
	int count = 0;
	for (int i = 0; i < s.size(); i++){
		if (isalpha(s[i])){
			count++;
		}
	}
	return count;
}

  
int main(){

	// Test a) function
	string s;
	cout << "Enter a string: ";
	cin >> s;
	cout << "Number of alphabetic characters: " << count_alpha(s) << endl;

	// Test b) function

	return 0;
}



