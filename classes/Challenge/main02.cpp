/*  
Lab 8 - 26-June-2024
David Ornelas
Challenge

*/
#include <iostream>	
#include <memory>
#include <vector>
#include <sstream>
#include "User.h"
#include "Msg.h"
#include "MsgManager.h"

// Main function
int main(){

	// Part C:
	std::cout << "\n\n *** Part C *** \n" << std::endl;

	// Create MsgManager
	MsgManager manager;

	// Load from output file
	manager.loadFromFile("./output.txt");

	// Read lists
	manager.printUsers();
	manager.printMsgs();

	return 0;
	
}



