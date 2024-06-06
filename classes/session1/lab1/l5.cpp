/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
using namespace std;


int main(){
	// setw - justifies the output to the right with a fixed width
	// 12 spaces for 2nd col
	// 13 spaces for 3rd col
	// 11 spaces for 4th col
	
	cout << "\n" <<	"Last name" << setw(13) << "First name"
	<< setw(6) << "Town" << setw(14) << "Country\n";
	
	cout << setfill('-') << setw(50) << '\n' << setfill(' ');
	
	cout <<	"Silva" << setw(11) << "Joao"
	<< setw(14) << "Aveiro" << setw(13) << "Portugal\n";
	
	cout <<	"Almeida" << setw(10) << "Maria"
	<< setw(13) << "Madrid" << setw(10) << "Spain\n";
	
	cout <<	"Santos" << setw(12) << "Miguel"
	<< setw(12) << "Moscow" << setw(11) << "Russia\n";

	return 0;
}



