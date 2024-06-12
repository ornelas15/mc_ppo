/*  
Lab 2 - 06-June-2024
David Ornelas

Start with a program that allows the user to input a 
number of integers, and then stores them into an int 
array. You can ask first to the user the number of 
elements. Use dynamic memory allocation for the array.

Write a function called maxint() that goes through the 
array, element by element, looking for the largest one. 
The function should take as arguments the address of the
array and the number of elements in it, and return the 
index number of the largest element. 
The program should call this function and then 
display the largest element and its index number.*/

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



