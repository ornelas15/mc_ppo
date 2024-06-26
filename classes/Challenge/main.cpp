/*  
Lab 8 - 26-June-2024
David Ornelas
Challenge

*/
#include <iostream>	
#include <vector>
#include <sstream>
#include "User.h"
#include "Msg.h"

// Main function
int main(){
	// Variables
	std::string name, email, mobile;
	std::vector<User> users;

	// Print part A details:
	std::cout << "\n\n *** Part A*** \n" << std::endl;

	// Create Maria user and print it
	User maria("Maria", "m@ua.pt", "+351234370500");
	std::cout << maria << std::endl;
	// Add Maria to vector "users"
	users.push_back(maria); 

	// Ask to add new user and save input
	std::cout << "\nnew user (name email mobile)?: ";
	
	// Uncomment the following lines to read from input
	// std::cin >> name >> email >> mobile; 
	// // Create input user and print it
	// User inUser(name, email, mobile);
	// std::cout << "\n" << inUser << std::endl;
	// // Add input user to vector "users"
	// users.push_back(inUser); 

	// Comment the following lines to read from input
	// For demonstration purposes:
	std::cout << "Ana a@ua.pt +351910910910" << std::endl;	
	// Create Ana user and print it
	User ana("Ana", "a@ua.pt", "+351910910910");
	std::cout << "\n" << ana << std::endl;
	// Add Ana to vector "users"
	users.push_back(ana);

	// Print Maria again
	std::cout << "\n" << users[0] << std::endl;

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
	std::string info, srcAddr, destAddr, Addr;

	// Send email from Maria to Manuel
	info = "The PpO exam is today!";
	srcAddr = maria.getEmail();
	destAddr = manuel.getEmail();
	EmailMsg email1(info, srcAddr, destAddr);
	std::cout << email1 << std::endl;

	// Ask for new email and save input
	std::cout << "\nnew email (first the content in one line, then the from and to addresses)?:" << std::endl;

	// Uncomment the following lines to read from input
	// std::cout << "\n";
	// std::getline(std::cin, info);
	// std::cout << "\n";
	// std::getline(std::cin, Addr);
	// // Split addresses
	// std::istringstream ss(Addr);
    // ss >> srcAddr >> destAddr;

	// //Create input email and print it
	// EmailMsg inEmail(info, srcAddr, destAddr);
	// std::cout << "\n" << inEmail << std::endl;

	// Comment the following lines to read from input
	// For demonstration purposes:
	info = "I am ready for the PpO exam :-)";
	srcAddr = ana.getEmail();
	destAddr = maria.getEmail();
	std::cout << "\n" << info << "\n" << std::endl;
	std::cout << srcAddr << " " << destAddr << std::endl;

	// Create email from Ana to Maria
	EmailMsg email2(info, srcAddr, destAddr);

	// Print email
	std::cout << "\n" << email2 << "\n" << std::endl;

	// Print ID from email
	std::cout << "e3 id: " << email2.getID() << std::endl;

	// Create MobileMsg
	std::string srcNo, destNo, Number;
	info = "The PpO exam is indeed today!";
	srcAddr = maria.getMobile();
	destAddr = manuel.getMobile();
	MobileMsg mobile1(info, srcAddr, destAddr);
	std::cout << "\n" << mobile1 << std::endl;

	// Ask for new mobile message and save input
	std::cout << "\nnew mobile message (first the content in one line, then the from and to addresses)?:" << std::endl;

	// Uncomment the following lines to read from input
	// std::cout << "\n";
	// std::getline(std::cin, info);
	// std::cout << "\n";
	// std::getline(std::cin, Number);
	// // Split addresses
	// std::istringstream ss2(Number);
	// ss2 >> srcNo >> destNo;

	// //Create input mobile message and print it
	// MobileMsg inMobile(info, srcNo, destNo);
	// std::cout << "\n" << inMobile << std::endl;

	// Comment the following lines to read from input
	// For demonstration purposes:
	info = "The exam is about PO.";
	srcNo = maria.getMobile();
	destNo = ana.getMobile();
	std::cout << "\n" << info << "\n" << std::endl;
	std::cout << srcNo << " " << destNo << std::endl;

	// Create mobile message from Maria to Ana
	MobileMsg mobile2(info, srcNo, destNo);

	// Print mobile message
	std::cout << "\n" << mobile2 << "\n" << std::endl;

	// Print ID and type from mobile message
	std::cout << "m3 id: " << mobile2.getID() << " and type " << mobile2.getType() << "\n" << std::endl;


	// Part B:
	std::cout << "\n\n *** Part B *** \n" << std::endl;

	


	return 0;
	
}



