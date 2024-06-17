/*  
Lab 3 - 12 June-2024
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
using namespace std;


// Structure that holds max value and its index from an array
struct MaxElemArr {
    int maxVal;
    int idx;
};

// Function that returns max element in the array
MaxElemArr maxint(int* array, int n) {
    MaxElemArr maxElem;

    maxElem.maxVal = array[0]; 
    maxElem.idx = 0;           
	// Check for the largest element in the array
    for (int i = 1; i < n; i++) {
        if (array[i] > maxElem.maxVal) {
            maxElem.maxVal = array[i];
            maxElem.idx = i;
        }
    }
    return maxElem; 
}
	
int main(){

	int n;
	cout << "Insert the size of the wanted array: ";
	cin >> n;

	// Check if the input is valid
	if (n <= 0) {
		cout << "Invalid input. Please insert integers." << endl;
		return 0;
	}

	// Dynamically allocate memory for the array
	int* array = new int[n];
	cout << "Insert the elements of the array: ";
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}

	// Find the largest element and its index in the array
	MaxElemArr maxElem = maxint(array, n);
	cout << "The largest element is: " << maxElem.maxVal << " at index: " << maxElem.idx << endl;

	// Free the memory allocated for the array
	delete [] array;
	return 0;


}



