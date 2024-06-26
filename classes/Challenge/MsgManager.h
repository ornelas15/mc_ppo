#ifndef MSGMANAGER_H
#define MSGMANAGER_H

#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <memory>
#include "User.h"
#include "Msg.h"

class MsgManager {
 public:

  // Function to add users and messages
  void addUser(const std::string &email, User &user) { users_[email] = user; };

  // Function to print list of emails sent from a given email addres
  void getEmailsFrom(const std::string &srcAddr) const {};
  


 private:
  // Map to store users
  std::map<std::string, User> users_;
  // Vector to store messages
  std::vector<std::unique_ptr<Msg>> msgs_; 


};


#endif // MSGMANAGER_H