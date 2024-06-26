/*  
Lab 8 - 26-June-2024
David Ornelas
Challenge

*/
#include <iostream>	
#include <vector>
#include "User.h"
#include "Msg.h"

// Main function
int main(){
	// Variables
	std::string name, email, mobile;
	std::vector<User> users;

	// Print part A details:
	std::cout << "\nPart A: \n\n" << std::endl;

	// Create Maria user and print it
	User maria("Maria", "m@ua.pt", "+351234370500");
	std::cout << maria << std::endl;
	// Add Maria to vector "users"
	users.push_back(maria); 

	// Ask to add new user and save input
	std::cout << "\nnew user (name email mobile)?: ";
	
	// Uncomment the following lines to read from input
	//std::cin >> name >> email >> mobile; 
	// Create input user and print it
	//User inUser(name, email, mobile);
	//std::cout << "\n" << inUser << std::endl;
	// Add input user to vector "users"
	//users.push_back(inUser); 

	// Comment the following lines to read from input
	// For demonstration purposes:
	std::cout << "Ana a@ua.pt +351910910910" << std::endl;	
	// Create Ana user and print it
	User ana("Ana", "a@ua.pt", "+351910910910");
	std::cout << "\n" << ana << std::endl;
	// Add Ana to vector "users"
	users.push_back(ana);

	// Print Maria again
	std::cout << "\n" << maria << std::endl;

	// Create Manuel with custom separators
	User manuel("Manuel", "mm@ua.pt", "+351234370522", ";");
	std::cout << "\n" << manuel << std::endl;
	// Add Manuel to vector "users"
	users.push_back(manuel);

	// Call first user of vector "users"
	if (!users.empty()) { std::cout << "\nfirst is " << users[0] << std::endl;  
	} else { std::cout << "Error: No users available." << std::endl; }

	// Create print separator for part 2:
	std::cout << "\n" << std::string(50, '-') << "\n" << std::endl;   

	// ex 2 of part A:
	std::string info, srcAddr, destAddr;

	// Send email from Maria to Manuel
	info = "The PpO exam is today!";
	srcAddr = maria.getEmail();
	destAddr = manuel.getEmail();
	EmailMsg email1(info, srcAddr, destAddr);
	std::cout << email1 << std::endl;

	// Ask for new email and save input
	std::cout << "\nnew email (first the content in one line, then the from and to addresses)?:\n";

	// Uncomment the following lines to read from input
	std::cin >> info >> srcAddr >> destAddr;

	//Create input email and print it
	EmailMsg inEmail(info, srcAddr, destAddr);
	std::cout << "\n" << inEmail << std::endl;

	// Comment the following lines to read from input
	// For demonstration purposes:
	// std::cout << "I am ready for the PpO exam :-)" << std::endl;
	// std::cout << ana.getEmail() << " " << maria.getEmail() << std::endl;

	// // Create email from Ana to Maria
	// info = "I am ready for the PpO exam :-)";
	// srcAddr = ana.getEmail();
	// destAddr = maria.getEmail();
	// EmailMsg email2(info, srcAddr, destAddr);

	// // Print email
	// std::cout << "\n" << email2 << std::endl;


	return 0;
	
}



