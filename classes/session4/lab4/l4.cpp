/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.4
a)
Write a program that asks for the filenames to be processed and 
save them into an array of strings. Then the program should load 
the files and print (on the screen) the global grade sheet 
(all classes), with the 3 columns: the student number, the 
student name and its final grade, formatted and aligned.

b) Change your program in order to be able to write the grade sheet into an output file.

*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
using namespace std;


int main(){

	// Load files into an array of strings
	vector<string> filenames;
	string filename;
	cout << "\nProgram to load global grade sheets of different classes." << endl;
	cout << "Type 'end' to finish and only .csv files are allowed." << endl; 
	cout << " \nEnter the file names to be processed: \n" << endl; 

	// Read filenames
	while (cin >> filename){ //&& filename != "end"){
		if (filename == "end"){break;}
		filenames.push_back(filename);
	}

	// Add relative path to filenames
	string path = "classes/session4/lab4/";
	for (int i = 0; i < filenames.size(); i++){
		filenames[i] = path + filenames[i] + ".csv";
	}

	// Create output file
	string output_filename = path + "schoolf.csv";
    ofstream outputFile(output_filename);
    if (!outputFile.is_open()) {
        cerr << "Failed to create the output file." << endl;
        return 1; // Exit if the file cannot be opened
    }

	// Flag to create header only once
	bool FirstFile = true;

	// Open files and print global grade sheet
	for (int i = 0; i < filenames.size(); i++){
		ifstream file(filenames[i]);
		if (!file){
			cerr << "Error: could not open file " << filenames[i] << endl;
			return -1;
		}

 		string line;
        while (getline(file, line)){
            // Skip the header line of each file
            if (line.find("Number") != string::npos){continue;}

            // Add header for the first file
            if (FirstFile){
				cout << setfill('-') << setw(72) << "-" << endl;
                cout << setfill(' '); 
                cout << right << setw(12) << "Number"
                     << setw(50) << left << " Name"
                     << setw(10) << left << "Grade" << endl;
                cout << setfill('-') << setw(72) << "-" << endl;
                cout << setfill(' '); 
                FirstFile = false;
            }

            // Parse line
            stringstream ss(line);
            string number, name, grade;
            getline(ss, number, ',');
            getline(ss, name, ',');
            getline(ss, grade, ',');

            // Print table rows (version a)
            cout << right << setw(12) << number
                 << left << setw(50) << " " + name
                 << setw(10) << grade << endl;

			// Print table rows (version b)
			string output_str = (number + "," + name + "," + grade + "\n");
            outputFile << output_str;

		}
		file.close();
	}
	
	cout << setfill('-') << setw(72) << "-" << endl;
	cout << setfill(' '); 

	// Close output file
	outputFile.close();

	cout << "\nThe global grade sheet has been saved to 'schoolf.csv'." << endl;

	return 0;
}



