/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.9: 
Write a function which calculates the greatest common divisor 
between two integer positive numbers using the Euclidean algorithm, 
given by the following definition:
gdc(a,b) = a if b = 0; gdc(r,b) if b > 0, where r is the remainder of the division of a by b. 
Use it in a program which requests that value to the user. 
Provide two different implementations.

*/

#include <iostream>
using namespace std;

// Function to calculate the greatest common divisor between two numbers using recursion
int gcd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
		int r = a % b;
        return gcd(b, r);} 
}

int main() {
    int a, b;
    cout << "Enter two positive numbers: ";
    cin >> a >> b;
    if (a > 0 && b > 0) {
        cout << "Greatest common divisor: " << gcd(a, b) << endl;
    } else {
        cout << "Please enter only positive numbers." << endl;
    }
    return 0;
}


