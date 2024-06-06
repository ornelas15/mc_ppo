/*  
Lab 2 - 06-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
#include <string>
using namespace std;


int main(){

	bool r = 5 == 5;
	cout << r << endl;

	cout << "two numbers: ";
	int a,b;
	cin >> a >> b;
	string s = (a == b) ? "true" : "false";
	cout << s << endl;

	int mes;
	cout << "mes: ";
	cin >> mes;

	switch(mes) {
		case 1:
			cout << "January" << endl;
			break;
		case 2:
			cout << "February" << endl;
			break;
		case 3:
			cout << "March" << endl;
			break;
		case 4:
			cout << "April" << endl;
			break;
		case 5:
			cout << "May" << endl;
			break;
		case 6:
			cout << "June" << endl;
			break;
		case 7:
			cout << "July" << endl;
			break;
		case 8:
			cout << "August" << endl;
			break;
		case 9:
			cout << "September" << endl;
			break;
		case 10:
			cout << "October" << endl;
			break;
		case 11:
			cout << "November" << endl;
			break;
		case 12:
			cout << "December" << endl;
			break;
	}

	return 0;
}



