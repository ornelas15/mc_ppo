#ifndef MSGMANAGER_H
#define MSGMANAGER_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <memory>
#include <fstream>
#include "User.h"
#include "Msg.h"

class MsgManager {
 public:

  // Function to add users
  void addUser(const std::string &email, const User &user) { users_[email] = user; };

  // Function to add messages
  void addMsg(std::unique_ptr<Msg> msg) { msgs_.push_back(std::move(msg)); };

  // Function to print users, sorted by email
  void printUsers() const {
      std::cout << "Users List (sorted by email):\n" << std::endl;
      for (const auto& pair : users_) {
          std::cout << "    " << pair.second.getName() << " +++ " << pair.first << " *** " << pair.second.getMobile() << "\n";
      }
  }

  // Function to print messages
  void printMsgs() const {
      std::cout << "\nMessage List:\n" << std::endl;
      for (const auto& msg : msgs_) {
          std::cout << "    " << msg->getInfo() << std::endl;
      }
  }

  // Function to print list of emails sent from a given email addres
  void getEmailsFrom(const std::string &srcAddr) const {
    bool hasEmails = false;  // Local flag 
    std::cout << "\nSent emails from " << srcAddr << ":\n" << std::endl;
    // Iterate over all messages 
    for (const auto &msg : msgs_) {
        // Ensure it's an email message
        if (msg->getType() == "email") {  
            // Cast to EmailMsg
            EmailMsg *email = dynamic_cast<EmailMsg*>(msg.get()); 
            // Check if source address matches
            if (email && email->getSrcAddr() == srcAddr) {
                // Check if emails have been found
                if (!hasEmails) { hasEmails = true; }
                // Print email information
                std::cout << "    to " << email->getDestAddr() 
                << ": " << email->getInfo() << std::endl;
            }
        }
    }
    // Return if no emails have been found
    if (!hasEmails) { std::cout << "    No emails found.\n"; }
  };

  // Function to save lists on files
  void saveOnFile(const std::string& filename) const {
        std::ofstream file(filename);
        if (!file) {
            std::cerr << "Error opening file for writing." << std::endl;
            return; }

        // Write users
        // Acess each user in the map (pair: key, value)
        for (const auto& pair : users_) {
            file << "user " << pair.second.getName() << " " << pair.first << " " << pair.second.getMobile() << "\n"; }

        // Write messages
        // Acess each msg in the map (pair: key, value)
        for (const auto& msg : msgs_) {
            if (msg->getType() == "email") {
                EmailMsg* emailMsg = dynamic_cast<EmailMsg*>(msg.get());
                if (emailMsg) {
                    file << "email " << emailMsg->getSrcAddr() << " " << 
                    emailMsg->getDestAddr() << " " << emailMsg->getInfo() << "\n"; }
            } else if (msg->getType() == "mobile") {
                MobileMsg* mobileMsg = dynamic_cast<MobileMsg*>(msg.get());
                if (mobileMsg) {
                    file << "mobile " << mobileMsg->getSrcPhoneNo() << " " << 
                    mobileMsg->getDestPhoneNo() << " " << mobileMsg->getInfo() << "\n"; }
            }
        }
        file.close();
    }


  // Function to load lists from files
  void loadFromFile(const std::string& filename) {
        std::ifstream file(filename);
        if (!file) { std::cerr << "Unable to open file." << std::endl;    return; }

        // Read file line by line
        std::string line, type;
        while (getline(file, line)) {
            std::istringstream iss(line);
            iss >> type;
            if (type == "user") {
                std::string name, email, mobile;
                iss >> name >> email >> mobile;
                addUser(email, User(name, email, mobile));
            } else if (type == "email") {
                std::string srcAddr, dstAddr, info;
                iss >> srcAddr >> dstAddr;
                getline(iss, info);
                addMsg(std::make_unique<EmailMsg>(info, srcAddr, dstAddr));
            } else if (type == "mobile") {
                std::string srcPhone, dstPhone, info;
                iss >> srcPhone >> dstPhone;
                getline(iss, info);
                addMsg(std::make_unique<MobileMsg>(info, srcPhone, dstPhone));
            }
        }
        file.close();
    }


 private:
  // Map to store users
  std::map<std::string, User> users_;
  // Vector to store messages
  std::vector<std::unique_ptr<Msg>> msgs_; 

};


#endif // MSGMANAGER_H