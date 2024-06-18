/*  
Lab 5 - 18-June-2024
David Ornelas

Ex.1:
Consider the file stocks.csv available on the base files folder. 
Each line has the following information:
Name, Date, OpeningPrice, MaxPrice, MinPrice, ClosingPrice, Volume

Implement functions that would calculate and print the following parameters:

	a) mostTraded - the most traded company (with the largest total volume);

	-b) highestDiff - company with the highest daily appreciation (difference between the opening price and the closing price);

	- c) company with the highest valuation (stock growth) during the period to which the file refers; 

	- d) day and value at which each share reached the highest value;

	- e) Create a function that calculates the valuation of a given portfolio between two given dates. The portfolio should be a dictionary with the number of shares of each title, eg: {'NFLX': 100, 'CSCO': 80}.

*/

#include <iostream>	
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

// Function to calculate the most traded company
void mostTraded(ifstream &file){
	// Check Volume col to find highest value
	int maxVolume = 0;
	string line;
	string mostTraded;

	


}


int main(){

	// Variable to store the file name
	string filename = "stocks.csv";

	// Save on current path folder
	string path = "classes/session4/lab4/";
	filename = path + filename;

	// Open file
	ifstream file(filename);

	// Call function to get max Volume
	mostTraded(file);

	// Close the file
	file.close();

	return 0;
	
}



