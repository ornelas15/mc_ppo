/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.2
Write a function called hms_to_secs() that takes three int values - 
for hours, minutes, and seconds - as arguments, and returns the equivalent time
in seconds (type long). 
Create a program that exercises this function by repeatedly obtaining 
a time value in hours, minutes, and seconds from the user (format 12:59:59),
calling the function, and displaying the value of seconds it returns.
*/

#include <iostream>	
#include <iomanip>
using namespace std;


// Function that converts hours, minutes and seconds to seconds
long hms_to_secs(int hours, int minutes, int seconds){
	return hours*3600 + minutes*60 + seconds;
}


int main(){

	// Declare variables
	int hours, minutes, seconds;

	// Ask user for time value
	cout << "Enter a time value in hours, minutes and seconds (format hh:mm:ss): " << endl;
	cin >> hours >> minutes >> seconds;

	// Call function and display the value of seconds
	cout << "The time value in seconds is: " << hms_to_secs(hours, minutes, seconds) << endl;

	return 0;
}



