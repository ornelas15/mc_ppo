// Person.cpp
#include "Person.h"

// Default constructor
Person::Person() {
    std::cout << "Person constructor called" << std::endl;
    name_ = "default name";
    age_ = 0;
}

// Parameterized constructor
Person::Person(const std::string& name, int age) : name_(name), age_(age) {}

// Destructor
Person::~Person() {
    std::cout << "Person destructor called for " << name_ << std::endl;
}

// Setter for name
void Person::setName(const std::string& name) {
    name_ = name;
}

// Setter for age
void Person::setAge(int age) {
    age_ = age;
}

// Getter for name
std::string Person::getName() const {
    return name_;
}

// Getter for age
int Person::getAge() const {
    return age_;
}
