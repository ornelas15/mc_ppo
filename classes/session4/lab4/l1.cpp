/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.1
Implement a program that copy a text file to another file.
Both files should be located in the folder where you execute the
program and their names should be asked to the user.
*/

#include <iostream>	
#include <fstream>
#include <string>
using namespace std;


int main(){

	// Ask for file names
	string filename1, filename2;
	cout << "Enter the name of the first file: ";
	cin >> filename1;
	cout << "Enter the name of the second file: ";
	cin >> filename2;

	// Save on current path folder
	string path = "classes/session4/lab4/";
	filename1 = path + filename1;
	filename2 = path + filename2;

	// Open files
	ifstream file1(filename1);
	ofstream file2(filename2);

	// Check if files are open
	if (!file1.is_open()) {
        cerr << "Failed to open " << filename1 << endl;
        return 1;}
    if (!file2.is_open()) {
        cerr << "Failed to open " << filename2 << endl;
        return 1;}
	
	string text;
	while (getline(file1, text)) {  
		file2 << text << endl;      
	}
	
	// Close files
	file1.close();
	file2.close();

	return 0;
	
}



