#ifndef USER_H
#define USER_H

#include <iostream>
#include <ostream>
#include <string>

class User {
 public:
  // Default constructor
  User() : name_(""), email_(""), mobile_("") {};

  // Constructor with default separators
  User(const std::string& name, const std::string& email, const std::string& mobile) : name_(name), email_(email), mobile_(mobile), 
            first_sep_("+++"), second_sep_("***") {};

  // Constructor with one custom separators
  User(const std::string& name, const std::string& email, const std::string& mobile, const std::string& separator) 
  : name_(name), email_(email), mobile_(mobile), first_sep_(separator), second_sep_(separator) {};

  // Constructor with two custom separators
  User(const std::string& name, const std::string& email, const std::string& mobile, const std::string& first_sep, const std::string& second_sep) 
  : name_(name), email_(email), mobile_(mobile), first_sep_(first_sep), second_sep_(second_sep) {};

  // Copy Constructor
  User(const User &other) : name_(other.name_), email_(other.email_), mobile_(other.mobile_), first_sep_(other.first_sep_), second_sep_(other.second_sep_) {};
  
  // Setters
  void setName(std::string name) { name_ = name; }
  void setEmail(std::string email) { email_ = email; }
  void setMobile(std::string mobile) { mobile_ = mobile; }
  void setFirstSep(std::string first_sep) { first_sep_ = first_sep; }
  void setSecondSep(std::string second_sep) { second_sep_ = second_sep; }

  // Getters
  std::string getName() const { return name_; }
  std::string getEmail() const { return email_; }
  std::string getMobile() const { return mobile_; }
  std::string getFirstSep() const { return first_sep_; }
  std::string getSecondSep() const { return second_sep_; }

  // Destructor
  ~User() {};
  
  // Insertion << operator
  friend std::ostream& operator<<(std::ostream &os, const User &user){
    os << user.name_ << " " << user.first_sep_ << " " << user.email_ <<
    " " << user.second_sep_ << " " << user.mobile_; return os; }

 private:
  std::string name_;
  std::string email_;
  std::string mobile_;
  std::string first_sep_;
  std::string second_sep_;
};

#endif // USER_H