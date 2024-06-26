#ifndef MSG_H
#define MSG_H

#include <iostream>
#include <string>

class Msg {
 public:
  // Constructor
  Msg(const std::string &info) : info_(info) {}

  // Copy Constructor
  Msg(const Msg &other) : info_(other.info_) {}

  // Setters
  void setInfo(std::string info) { info_ = info; }
  
  // Getters
  std::string getInfo() const { return info_; }

  // Destructor
  virtual ~Msg() {};

  // Virtual function getType
  virtual std::string getType() const = 0;

 private:
  std::string info_;
};

class EmailMsg : public Msg {
 public:
  // Constructor
  EmailMsg(const std::string &info, const std::string &srcAddr, const std::string &destAddr) 
  : Msg(info), id_(global_emid++), srcAddr_(srcAddr), destAddr_(destAddr) {}

  // Copy constructor
  EmailMsg(const EmailMsg &other) : Msg(other), id_(other.id_), srcAddr_(other.srcAddr_), destAddr_(other.destAddr_) {}

  // Setters
  void setID(unsigned int id) { id_ = id; }
  void setSrcAddr(std::string srcAddr) { srcAddr_ = srcAddr; }
  void setDestAddr(std::string destAddr) { destAddr_ = destAddr; }

  // Getters
  unsigned int getID() const { return id_; }
  std::string getSrcAddr() const { return srcAddr_; }
  std::string getDestAddr() const { return destAddr_; }

  // Destructor
  ~EmailMsg() {};

  // getType function
  std::string getType() const override { return "Email"; }

  // Operator << overload
  friend std::ostream& operator<<(std::ostream &os, const EmailMsg &email){
    os << "Email " << email.getID() << " from " << email.getSrcAddr() << " to " << email.getDestAddr() << " with content: " << email.getInfo();
    return os; }


 private:
  static unsigned int global_emid;
  unsigned int id_;
  std::string srcAddr_;
  std::string destAddr_;
};


class MobileMsg : public Msg {
 public:
  //Constructor
  MobileMsg(const std::string &info, const std::string &srcPhoneNo, const std::string &destPhoneNo) 
  : Msg(info), id_(global_mobid++), srcPhoneNo_(srcPhoneNo), destPhoneNo_(destPhoneNo) {}   

  // Copy constructor
  MobileMsg(const MobileMsg &other) : Msg(other), id_(other.id_), srcPhoneNo_(other.srcPhoneNo_), destPhoneNo_(other.destPhoneNo_) {}

  // Setters
  void setID(unsigned int id) { id_ = id; }
  void setSrcPhoneNo(std::string srcPhoneNo) { srcPhoneNo_ = srcPhoneNo; }
  void setDestPhoneNo(std::string destPhoneNo) { destPhoneNo_ = destPhoneNo; }

  // Getters
  unsigned int getID() const { return id_; }
  std::string getSrcPhoneNo() const { return srcPhoneNo_; }
  std::string getDestPhoneNo() const { return destPhoneNo_; }

  // Destructor
  ~MobileMsg() {};

  // getType function
  std::string getType() const override { return "Mobile"; }

  // Operator << overload
  friend std::ostream& operator<<(std::ostream &os, const MobileMsg &mobile){
    os << "Mobile Msg" << mobile.getID() << " from " << mobile.getSrcPhoneNo() << " to " << mobile.getDestPhoneNo() << " with content: " << mobile.getInfo(); return os; }

 private:
  static unsigned int global_mobid;
  unsigned int id_;
  std::string srcPhoneNo_;
  std::string destPhoneNo_;
};

// Initialize the static member variable for email and phone
unsigned int EmailMsg::global_emid = 1;
unsigned int MobileMsg::global_mobid = 100;

#endif // MSG_H