/*  
Lab 6 - 20-June-2024
David Ornelas

Ex.1:
Create a class called Time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. You should also implement the copy constructor.
Implement the insertion operator in order to "display" the time in the 11:59:59 format. Implement also the sum and subtraction operators to work with this type of objects. Include also member functions to act as setters and getters.

You should then implement a program to test your class. You should create at least two initialized Time objects and one that isn’t initialized. Then it should add the two initialized values together, leaving the result in the third time variable. Finally it should display the value of all the objects. Make appropriate member functions and arguments const.

*/
#include "Time.h"
#include <iostream>	
using namespace std;

// Main function
int main(){

    Time t1;
    Time t2(10, 20, 40);
    Time t3 = t2 + t2;

    cout << "Time 1: " << t1 << endl;
    cout << "Time 2: " << t2 << endl;
    cout << "Time 3: " << t3 << endl;


	return 0;
	
}



