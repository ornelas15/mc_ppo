/*  
Lab 1 - 04-June-2024
David Ornelas
*/

#include <iostream>	
#include <iomanip>
#include <string>
using namespace std;


int main(){

	// Display a pyramid of Xs with the number of lines being an input from the user
	
	// Ask for a number
	int lines;
	cout << "Enter pyramid height: ";
	cin >> lines;

    /* Print pyramid based on input number:
	  X      <- 2 spaces before X (3 - 1 = 2)
 	 XXX     <- 1 space before XXX (3 - 2 = 1)
	XXXXX    <- 0 spaces before XXXXX (3 - 3 = 0)
	*/

    for (int line = 1; line <= lines; line++) {
        int numXs = 2 * line - 1;  // 1..3..5..7..9
        int numSpaces = lines - line;  // number of spaces needed for centering

        // Print leading spaces
        cout << string(numSpaces, ' ');

        // Print Xs
        cout << string(numXs, 'X') << endl;
    }
	
	return 0;
}



