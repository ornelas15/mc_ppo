/*  
26-June-2024
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
	// Declare Variables
	std::string in_name, in_email, in_mobile;
	std::vector<User> users;
	std::cout << "\n\n *** Part A*** \n" << std::endl;

	// Create Maria user and add to vector users
	User maria("Maria", "m@ua.pt", "+351234370500");
	users.push_back(maria); 
	std::cout << maria << std::endl;

	// Ask to add new user and save input
	std::cout << "\nnew user (name email mobile)?: ";
	
	// // Uncomment the following lines to read from input
	// std::cin >> in_name >> in_email >> in_mobile; 
	// // Create input user and add to vector users
	// User ana(in_name, in_email, in_mobile);
	// users.push_back(ana); 
	// std::cout << "\n" << ana << std::endl;
	
	// Comment the following lines to read from input
	// Create Ana user and add to vector users
	User ana("Ana", "a@ua.pt", "+351910910910");
	users.push_back(ana);
	std::cout << "Ana a@ua.pt +351910910910" << std::endl;	
	std::cout << "\n" << ana << std::endl;

	// Print missing users besides last added
	if (users.size() > 1) {
		for (size_t i = 0; i < users.size()-1; i++) {
			std::cout << "\n" << users[i] << std::endl;	}
	} else { std::cout << "Error: No users pushed." << std::endl; }

	// Create Manuel with custom separators and add to vector
	User manuel("Manuel", "mm@ua.pt", "+351234370522", ";");
	users.push_back(manuel);
	std::cout << "\n" << manuel << std::endl;	

	// Call first user of vector
	if (!users.empty()) { std::cout << "\nfirst is " << users[0] << std::endl;
	} else { std::cout << "Error: No users pushed." << std::endl; }

	// Create print separator for part 2:
	std::cout << "\n" << std::string(50, '-') << "\n" << std::endl;   

	// ----------------------------------------------

	// Email Messages:
	std::string infoEm1, srcAddr1, destAddr1;
	std::string infoEm2, srcAddr2, destAddr2, Addr;

	// Send email from Maria to Manuel
	infoEm1 = "The PpO exam is today!";
	srcAddr1 = maria.getEmail();
	destAddr1 = manuel.getEmail();
	EmailMsg email1(infoEm1, srcAddr1, destAddr1);
	std::cout << email1 << std::endl;

	// Ask for new email and save input
	std::cout << "\nnew email (first the content in one line, then the from and to addresses)?:" << std::endl;

	// // Uncomment the following lines to read from input
	// std::cout << "\n";
	// std::getline(std::cin, infoEm2);
	// std::cout << "\n";
	// std::getline(std::cin, Addr);
	// // Split addresses of same line, create input email
	// std::istringstream ss(Addr); 
    // ss >> srcAddr2 >> destAddr2;
	// EmailMsg email2(infoEm2, srcAddr2, destAddr2);
	// std::cout << "\n" << email2 << std::endl;


	// Comment the following lines to read from input
	infoEm2 = "I am ready for the PpO exam :-)";
	srcAddr2 = ana.getEmail();
	destAddr2 = maria.getEmail();
	std::cout << "\n" << infoEm2 << "\n" << std::endl;
	std::cout << srcAddr2 << " " << destAddr2 << std::endl;
	// Create email from Ana to Maria
	EmailMsg email2(infoEm2, srcAddr2, destAddr2);
	std::cout << "\n" << email2 << "\n" << std::endl;
	std::cout << "e3 id: " << email2.getID() << std::endl; // print ID

	// ----------------------------------------------

	// Mobile Messages:
	std::string infoNo1, srcNo1, destNo1;
	std::string infoNo2, srcNo2, destNo2, Number;

	// Create mobile msg
	infoNo1 = "The PpO exam is indeed today!";
	srcNo1 = maria.getMobile();
	destNo1 = manuel.getMobile();
	MobileMsg mobile1(infoNo1, srcNo1, destNo1);
	std::cout << "\n" << mobile1 << std::endl;

	// Ask for new mobile message and save input
	std::cout << "\nnew mobile message (first the content in one line, then the from and to mobiles)?:" << std::endl;

	// // Uncomment the following lines to read from input
	// std::cout << "\n";
	// std::getline(std::cin, infoNo2);
	// std::cout << "\n";
	// std::getline(std::cin, Number);
	// // Split addresses of same line, create input mobile msg
	// std::istringstream ss2(Number);
	// ss2 >> srcNo2 >> destNo2;
	// MobileMsg mobile2(infoNo2, srcNo2, destNo2);
	// std::cout << "\n" << mobile2 << std::endl;

	// Comment the following lines to read from input
	infoNo2 = "The exam is about PO.";
	srcNo2 = maria.getMobile();
	destNo2 = ana.getMobile();
	std::cout << "\n" << infoNo2 << "\n" << std::endl;
	std::cout << srcNo2 << " " << destNo2 << std::endl;
	// Create mobile message from Maria to Ana
	MobileMsg mobile2(infoNo2, srcNo2, destNo2);
	std::cout << "\n" << mobile2 << "\n" << std::endl;
	std::cout << "m3 id: " << mobile2.getID() << " and type " 
	<< mobile2.getType() << "\n" << std::endl; // print ID and type

	return 0;
	
}



