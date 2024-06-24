/*  
Lab 5 - 18-June-2024
David Ornelas

Ex.1:
Consider the file stocks.csv available on the base files folder. 
Each line has the following information:
Name, Date, OpeningPrice, MaxPrice, MinPrice, ClosingPrice, Volume

Implement functions that would calculate and print the following parameters:

	a) mostTraded - the most traded company (with the largest total value);

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
#include <map>
#include <numeric>
using namespace std;

// Function to read column data from file
map<string, vector<double>> readColData(const string& filename, int col_idx) {
    // Open the file
    ifstream file(filename);
    string line;
    map<string, vector<double>> col_data;
    // Skip the header
    getline(file, line); 

    int lineCount = 0; 
    while (getline(file, line)) {
        stringstream ss(line);
        string name, temp;
        double value;

        getline(ss, name, ',');  // Read the stock name

        // Skip to the desired column (value)
        for (int i = 1; i < col_idx; i++) {
            getline(ss, temp, ',');
        }

        // Read the value from the column
        if (!(ss >> value)) { 
            continue;
        }

        col_data[name].push_back(value);
    }

    file.close();
    return col_data;
}

// Function to find the stock with the highest trading value
pair<string, double> mostTraded(const map<string, vector<double>>& value) {
    string company;
    double max_volume = 0;

    for (const auto& pair : value) {
        double total_volume = accumulate(pair.second.begin(), pair.second.end(), 0.0);
        if (total_volume > max_volume) {
            max_volume = total_volume;
            company = pair.first;
        }
    }
    return {company, max_volume};
}

// Function to find the stock with the highest daily appreciation
pair<string, double> highDiff(const map<string, vector<double>>& open_prices, const map<string, vector<double>>& close_prices) {
    // Initialize variables
    string company;
    double maxDiff = 0;
    // Iterate over the open prices
    for (const auto& pair : open_prices) {
        for (size_t i = 0; i < pair.second.size(); ++i) {
            double diff = close_prices.at(pair.first)[i] - pair.second[i];
            if (diff > maxDiff){maxDiff = diff; company = pair.first;}}}
    return {company, maxDiff};
}

int main() {
    // Save on current path folder
    string filename = "stocks.csv";
	string path = "classes/session5/lab5/";
	filename = path + filename;

    // Read value data
    auto volume_col = readColData(filename, 6); // Ensure the column index is correct
    if (volume_col.empty()) {
        cout << "No value data was loaded." << endl;
        return 1;
    }

    auto most_traded = mostTraded(volume_col);
    cout << "Most Traded Company: " << most_traded.first << " with value " << most_traded.second << endl;

    // Read opening and closing prices
    auto open_data = readColData(filename, 3);
    auto close_data = readColData(filename, 6); 
    auto high_diff = highDiff(open_data, close_data);
    cout << "Company with Highest Daily Appreciation: " << high_diff.first 
    << " with " << high_diff.second << endl;

    return 0;
}


