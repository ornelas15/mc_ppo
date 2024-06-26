/*  
Lab 7 - 25-June-2024
David Ornelas
Inheritance
*/

#include <iostream>
#include "Shape.h"
using namespace std;


// Main function
int main(){

	Point p(1,2);
	Shape s(p, "red");
	Shape s2(3,4, "blue");
	cout << s.getCenter().getX() << endl;
	cout << s2.getCenter().getX() << endl;
	cout << s.getColor() << endl;

	if (s < s2){
		cout << "s < s2" << endl;
	}
	else{
		cout << "s > s2" << endl;
	}

	return 0;

}



