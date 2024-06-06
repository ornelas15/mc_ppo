/*  
Lab 2 - 06-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
#include <string>
using namespace std;


int main(){

	// ----------------------------

	// Strings - ver slides 14,15,16,17,18:

	string name;
	// Same as:
	//string name = string();
	
	//cout << name << endl; // empty string

	cout << "Enter your name: ";
	cin >> name;
	cout << "Hello " << name << endl;

	cout << name.size() << endl;

	// ASCI Code means D > a but D < A
	cout << name.compare("David") << endl;

	// at() -> returns the character at the specified index
	// [] -> same as at(), more efficient

	return 0;


	// ----------------------------

	// // Arrays: 
	
	// // new -> returns an address with the size of the array in bytes:
	// // pointer -> saves adresse
	
	// // (&x)[0] -> returns the value of x
	// // &x -> returns the address of x
	// // int *age -> pointer to an integer
	// // age = new int[4] -> creates an array of 4 integers	

	// int x = 10;
	// cout << "x address: " << &x << " with value" << (&x)[0] << endl;

	// int *age; 
	// age = new int[4];  // 4 integers

	// cout << "age address: " << age << endl;

	// int j;
	// for (j = 0; j < 4; j++) {
	// 	cout << "Enter age: ";
	// 	cin >> age[j];
	// }

	// int *p = age;
	// for (j = 0; j < 4; j++) {
	// 	cout << "Age: " << p[j] << endl;
	// }

	// ----------------------------

	// Logic and loops:

	// bool r = 5 == 5;
	// cout << r << endl;

	// cout << "two numbers: ";
	// int a,b;
	// cin >> a >> b;
	// string s = (a == b) ? "true" : "false";
	// cout << s << endl;

	// int mes;
	// cout << "mes: ";
	// cin >> mes;

	// switch(mes) {
	// 	case 1:
	// 		cout << "January" << endl;
	// 		break;
	// 	case 2:
	// 		cout << "February" << endl;
	// 		break;
	// 	case 3:
	// 		cout << "March" << endl;
	// 		break;
	// 	case 4:
	// 		cout << "April" << endl;
	// 		break;
	// 	case 5:
	// 		cout << "May" << endl;
	// 		break;
	// 	case 6:
	// 		cout << "June" << endl;
	// 		break;
	// 	case 7:
	// 		cout << "July" << endl;
	// 		break;
	// 	case 8:
	// 		cout << "August" << endl;
	// 		break;
	// 	case 9:
	// 		cout << "September" << endl;
	// 		break;
	// 	case 10:
	// 		cout << "October" << endl;
	// 		break;
	// 	case 11:
	// 		cout << "November" << endl;
	// 		break;
	// 	case 12:
	// 		cout << "December" << endl;
	// 		break;
	// }

	return 0;
}



