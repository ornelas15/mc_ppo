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

	// Declare variables
	std::string msg1, msg2, msg3, msg4, msg5;

	// Create Users 
	User ana("Ana", "a@ua.pt", "+351910910910");
	User bernardo ("Bernardo", "b@ua.pt", "+351234370111");
	User maria("Maria", "m@ua.pt", "+351234370500");
	User ze("Ze", "ze@ua.pt", "+351234234234");
	
	// Create Messages, Sources and Destinations:
	msg1 = "The PpO exam is today!";
	msg2 = "I am ready :-)";
	msg3 = "The PpO exam is indeed today!";
	msg4 = "The content is what I studied.";
	msg5 = "I love programming.";

	// Create Email Messages:
	EmailMsg email1(msg1, maria.getEmail(), ana.getEmail());
	EmailMsg email2(msg2, ana.getEmail(), maria.getEmail());
	EmailMsg email3(msg4, ana.getEmail(), ze.getEmail());

	// Create Mobile Messages:
	MobileMsg mobile1(msg3, maria.getMobile(), bernardo.getMobile());
	MobileMsg mobile2(msg5, bernardo.getMobile(), maria.getMobile());

	// ----------------------------------------------

	// Part B:
	std::cout << "\n\n *** Part B *** \n" << std::endl;

	//Create MsgManager
	MsgManager manager;

	// Add users to manager
	manager.addUser(maria.getEmail(), maria);
	manager.addUser(ana.getEmail(), ana);;
	manager.addUser(bernardo.getEmail(), bernardo);
	manager.addUser(ze.getEmail(), ze);

	// Create unique pointers to messages and remove them from scope
	auto email_msg1 = std::make_unique<EmailMsg>(msg1, maria.getEmail(), ana.getEmail());
	auto email_msg2 = std::make_unique<EmailMsg>(msg2, ana.getEmail(), maria.getEmail());
	auto mobile_msg1 = std::make_unique<MobileMsg>(msg3, maria.getMobile(), bernardo.getMobile());
	auto email_msg3 = std::make_unique<EmailMsg>(msg4, ana.getEmail(), ze.getEmail());
	auto mobile_msg2 = std::make_unique<MobileMsg>(msg5, bernardo.getMobile(), maria.getMobile());

	// Add unique messages to manager
	manager.addMsg(std::move(email_msg1));
	manager.addMsg(std::move(email_msg2));
	manager.addMsg(std::move(mobile_msg1));
	manager.addMsg(std::move(email_msg3));
	manager.addMsg(std::move(mobile_msg2));

	// Print users
	manager.printUsers();

	// Print messages
	manager.printMsgs();

	// Test function getEmailsFrom
	manager.getEmailsFrom("a@ua.pt");

	// Save on file
	manager.saveOnFile("./output.txt");

	return 0;
	
}



