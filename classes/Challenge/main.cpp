/*  
Lab 8 - 26-June-2024
David Ornelas
Challenge

*/
#include <iostream>	
#include <vector>
#include "User.h"

// Main function
int main(){
	// Variables
	std::string name, email, mobile;
	std::vector<User> users;

	// Print part A details:
	std::cout << "\nPart A: \n\n" << std::endl;

	// Print Maria as new user
	User maria("Maria", "m@ua.pt", "+351234370500");
	std::cout << maria << std::endl;
	// Add Maria to users
	users.push_back(maria);
	
	// Ask to add new user and save input
	std::cout << "\nnew user (name email mobile)?: ";
	//For demonstration purposes
	std::cout << "Ana a@ua.pt +351910910910" << std::endl;	
	User ana("Ana", "a@ua.pt", "+351910910910");
	std::cout << "\n" << ana << std::endl;
	// Normal code
	//std::cin >> name >> email >> mobile; 
	// Add Ana to users
	users.push_back(User(name, email, mobile));

	// Print new user
	//User newUser(name, email, mobile);
	//std::cout << "\n" << newUser << std::endl;
	// Add new user to users
	//users.push_back(newUser);

	// Print Maria again
	std::cout << "\n" << maria << std::endl;

	// Call user with custom separators
	User manuel("Manuel", "mm@ua.pt", "+351234370522", ";");
	std::cout << "\n" << manuel << std::endl;
	// Add Manuel to users
	users.push_back(manuel);

	// Call first user of users
	try {
		std::cout << "\nfirst is " << users.at(0) << std::endl;
	} catch (std::out_of_range &e) {
		std::cout << "Error: " << e.what() << std::endl;
	}

	// Create print separator for part 2:
	std::cout << "\n" << std::string(50, '-') << "\n" << std::endl;   

	return 0;
	
}



