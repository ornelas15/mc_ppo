#ifndef PERSON_H
#define PERSON_H
#include <string>
#include <iostream>
using namespace std;

class Person {
private:
    // private attributes
    string name_;
    int age_;

public:
    //empty constructor 
    Person() {
        cout << "Person constructor called" << endl;
        name_ = "default name";
        age_ = 0;
    }

    // constructor with parameters
    Person(string name_, int age_);
    //Person(string name) : name_(name), age_(0) {};

    // copy constructor
    Person(const Person &other) {
        cout << "Person copy constructor called " << other.name_ << endl;
        name_ = other.name_;
        age_ = other.age_;
    }

    //destructor
    ~Person() {
        cout << "Person destructor called " << name_ << endl;
    }

    // setters and getters
    void setName(string name){name_ = name;}
    void setAge(int age){age_ = age;}
    string getName(){return name_;}
    int getAge(){return age_;}

    // operator overloading + 
    Person operator+(const Person &other) {
        Person new_person;
        new_person.name_ = name_ + " " + other.name_;
        new_person.age_ = age_ + other.age_;
        return new_person;
    }

    // operator overloading +=
    Person& operator+=(const Person &other) {
        name_ += " " + other.name_;
        age_ += other.age_;
        return *this;
    }

    // operator overloading >>
    friend istream& operator>>(istream &is, Person &person) {
        is >> person.name_ >> person.age_;
        return is;
    }
};


#endif //PERSON_H
