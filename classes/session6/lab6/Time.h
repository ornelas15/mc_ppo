// Create a class called Time that has separate int member data for hours, minutes, and seconds. One constructor should initialize this data to 0, and another should initialize it to fixed values. You should also implement the copy constructor.

// Implement the insertion operator in order to "display" the time in the 11:59:59 format. Implement also the sum and subtraction operators to work with this type of objects. Include also member functions to act as setters and getters.


/* Example of Initializer List
    Point(int i = 0, int j = 0): x(i), y(j) {}

The above use of Initializer list is optional as the
    constructor can also be written as:
    Point(int i = 0, int j = 0) {
        x = i;
        y = j;
    }
*/


#ifndef TIME_H
#define TIME_H

#include <iostream>
#include <string>
using namespace std;

class Time {
private:
    // Private attributes
    int hours_;
    int minutes_;
    int seconds_;

    // Private method to normalize time
    void normalize() {
        if (seconds_ >= 60) {
            minutes_ += seconds_ / 60;
            seconds_ %= 60;
        } else if (seconds_ < 0) {
            minutes_ -= (abs(seconds_) + 59) / 60;
            seconds_ = 60 - (abs(seconds_) % 60);
        }

        if (minutes_ >= 60) {
            hours_ += minutes_ / 60;
            minutes_ %= 60;
        } else if (minutes_ < 0) {
            hours_ -= (abs(minutes_) + 59) / 60;
            minutes_ = 60 - (abs(minutes_) % 60);
        }

        if (hours_ < 0) {
            hours_ = 0;
            minutes_ = 0;
            seconds_ = 0;
        }
    }

public:
    // Empty constructor
    Time() : hours_(0), minutes_(0), seconds_(0) {
        cout << "Empty Time constructor: " << endl;
    }

    // Constructor with fixed values
    Time(int hours, int minutes, int seconds) : hours_(hours), minutes_(minutes), seconds_(seconds) {
        cout << "Time constructor with fixed values: " << endl;
        normalize();
    }

    // Copy constructor
    Time(const Time &other) : hours_(other.hours_), minutes_(other.minutes_), seconds_(other.seconds_) {
        cout << "Time copy constructor: " << endl;
    }

    // Getters
    int getHours() const { return hours_; }
    int getMinutes() const { return minutes_; }
    int getSeconds() const { return seconds_; }

    // Setters
    void setHours(int hours) { hours_ = hours; normalize(); }
    void setMinutes(int minutes) { minutes_ = minutes; normalize(); }
    void setSeconds(int seconds) { seconds_ = seconds; normalize(); }

    // Insertion operator
    friend ostream& operator<<(ostream &os, const Time &time) {
        os << time.hours_ << ":" << (time.minutes_ < 10 ? "0" : "") << time.minutes_ << ":"
           << (time.seconds_ < 10 ? "0" : "") << time.seconds_;
        return os;
    }

    // Sum operator
    Time operator+(const Time &other) const {
        Time sum(hours_ + other.hours_, minutes_ + other.minutes_, seconds_ + other.seconds_);
        sum.normalize();
        return sum;
    }

    // Subtract operator
    Time operator-(const Time &other) const {
        Time sub(hours_ - other.hours_, minutes_ - other.minutes_, seconds_ - other.seconds_);
        sub.normalize();
        return sub;
    }
};

#endif // TIME_H

