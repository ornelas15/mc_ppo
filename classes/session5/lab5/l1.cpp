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

	- d) day and val at which each share reached the highest val;

	- e) Create a function that calculates the valuation of a given portfolio between two given dates. The portfolio should be a dictionary with the number of shares of each title, eg: {'NFLX': 100, 'CSCO': 80}.

*/

#include <iostream>	
#include <fstream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <iomanip>
#include <unordered_map>
using namespace std;

// Function to find the index of a specific column
int find_colidx(const string& col_header, const string& col_name) {
    // Split the header column
    stringstream split_str(col_header);
    string col;
    int idx = 0;
    while (getline(split_str, col, ',')) {
        if (col == col_name) {
            return idx;
        }
        idx++;
    }
    return -1;  
}

// Function to find the stock with the highest trading volume
int mostTraded(const string& filename) {
    
    // Open the file
    ifstream file(filename);
    // Check if the file is open
    if (!file.is_open()) {
        cerr << "Error: could not open file " << filename << endl;
        return -1;}

    // Declare variables (line for the header, and indexes for volume and name of the stock column)
    string line;
    int vol_idx = -1;
    int name_idx = -1;

    // Find index of column of the name and volume of stocks
    if (getline(file, line)) {
        vol_idx = find_colidx(line, "Volume");
        name_idx = find_colidx(line, "Name");
        if (vol_idx == -1 || name_idx == -1) {
            cerr << "Error: column not found" << endl;
            return -1;}}

    string stock_volume;
    double max_volume = -1;
    // Process the data rows
    while (getline(file, line)) {
        stringstream split_str(line);
        string val;
        vector<string> row_vals;
        while (getline(split_str, val, ',')) {row_vals.push_back(val);}

        // Convert the volume string to int and compare with max
        int volume = stoi(row_vals[vol_idx]);
        if (volume > max_volume) {
            max_volume = volume;
            stock_volume = row_vals[name_idx];
        }
    }

    // Close the file
    file.close();

    // Convert max volume to normal decimal
    cout << "Most traded company: " << stock_volume << " with " << fixed << setprecision(0) << max_volume << " Volume" << endl;
    
    return max_volume;
}

// Function to find the stock with the highest daily appreciation
int highestDiff(const string& filename) {
    
    // Open the file
    ifstream file(filename);
    // Check if the file is open
    if (!file.is_open()) {
        cerr << "Error: could not open file " << filename << endl;
        return -1;}

    // Declare variables (line for the header, and indexes for volume and name of the stock column)
    string line;
    int open_idx = -1;
    int close_idx = -1;
    int name_idx = -1;

    // Find index of column of the name and volume of stocks
    if (getline(file, line)) {
        open_idx = find_colidx(line, "OpeningPrice");
        close_idx = find_colidx(line, "ClosingPrice");
        name_idx = find_colidx(line, "Name");
        if (open_idx == -1 || close_idx == -1 || name_idx == -1) {
            cerr << "Error: column not found" << endl;
            return -1;}}

    string stock_name;
    double max_diff = -1;
    // Process the data rows
    while (getline(file, line)) {
        stringstream split_str(line);
        string val;
        vector<string> row_vals;
        while (getline(split_str, val, ',')) {row_vals.push_back(val);}

        // Convert the volume string to int and compare with max
        double open_price = stod(row_vals[open_idx]);
        double close_price = stod(row_vals[close_idx]);
        double diff = close_price - open_price;
        if (diff > max_diff) {
            max_diff = diff;
            stock_name = row_vals[name_idx];
        }
    }

    // Close the file
    file.close();

    // Convert max volume to normal decimal
    cout << "Company with highest daily appreciation: " << stock_name << " with " << fixed << setprecision(2) << max_diff << " Price diff (open/close)" << endl;
    
    return max_diff;
}

// Function to find the stock with the highest valuation ([(EndPrice - StartPrice)/StartPrice] x 100%)
int stockGrowth(const string& filename) {
    
    // Open the file
    ifstream file(filename);
    // Check if the file is open
    if (!file.is_open()) {
        cerr << "Error: could not open file " << filename << endl;
        return -1;}

    // Find first and last date of each stock
    string line;
    int open_idx = -1;
    int close_idx = -1;
    int name_idx = -1;

    // Find index of column of the name and volume of stocks
    if (getline(file, line)) {
        open_idx = find_colidx(line, "OpeningPrice");
        close_idx = find_colidx(line, "ClosingPrice");
        name_idx = find_colidx(line, "Name");
        if (open_idx == -1 || close_idx == -1 || name_idx == -1) {
            cerr << "Error: column not found" << endl;
            return -1;}}
   
    // Maps stock name to (firstRow, lastRow)
    unordered_map<string, pair<int, int>> stockRows;
    // Maps stock name to (firstPrice, lastPrice)
    unordered_map<string, pair<double, double>> stockPrices; 
    int rowIndex = 0;

    // Find the first and last row index of each stock
    while (getline(file, line)) {
        stringstream split_str(line);
        string val;
        vector<string> row_vals;
        while (getline(split_str, val, ',')) {row_vals.push_back(val);}

        // Get the stock name
        string stock_name = row_vals[name_idx];
        // If the stock is not in the map, add it
        if (stockRows.find(stock_name) == stockRows.end()) {
            stockRows[stock_name] = make_pair(rowIndex, rowIndex);
            stockPrices[stock_name] = make_pair(stod(row_vals[open_idx]), stod(row_vals[close_idx]));
        } else {
            stockRows[stock_name].second = rowIndex;
            stockPrices[stock_name].second = stod(row_vals[close_idx]);
        }
        rowIndex++;
    }

}

// Main function
int main(){

	// Variable to store the file name
	string filename = "stocks.csv";

	// Save on current path folder
	string path = "classes/session5/lab5/";
	filename = path + filename;

	// Call function to get max Volume
    mostTraded(filename); cout << "\n" << endl;

    // Call function to get highest diff
    highestDiff(filename); cout << "\n" << endl;

	return 0;
	
}



