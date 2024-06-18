/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.10: 
The Fibonnaci sequence is a sequence of integers in which each
element is equal to the sum of the two preceding ones: 
Fn = Fn-1 + Fn-2. The first values are defined as F0 = 0 and
e^f1 = 1. Write a function, Fibonnaci(n), to calculate the
n^th Fibonnaci number.
Which is the value of F40? 
Provide two different implementations.


*/

#include <iostream>	
#include <bitset>
using namespace std;

// Function to calculate the nth Fibonacci number using recursion
int fib(int n) {
	if (n <= 1) {return n;} 
	return fib(n - 1) + fib(n - 2);
}

// Second function to calculate the nth Fibonacci number using iteration
int fib2(int n) { 
    // Declare an array to store Fibonacci numbers. 
    int f[n + 2];  
    int i; 

    // 1st numbers of the series are 0 and 1 
    f[0] = 0; 
    f[1] = 1; 
  
    for(i = 2; i <= n; i++) { 
       //Add the previous 2 numbers in the series and store it 
       f[i] = f[i - 1] + f[i - 2]; 
    } 
    return f[n]; 
} 
  

int main(){

	// Fibonacci sequence
	int n = 40;
	cout << "Fibonacci(" << n << "): " << fib(n) << endl;
	cout << "Fibonacci(" << n << "): " << fib2(n) << endl;

	return 0;
}



