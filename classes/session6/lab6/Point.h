#ifndef POINT_H
#define POINT_H

#include <iostream>
using namespace std;

class Point {
private:
    // Private attributes
    double centerX_;
    double centerY_;

public:
    // Empty constructor
    Point() : centerX_(0), centerY_(0) {}
   
    // Constructor with values
    Point(double centerX, double centerY) : centerX_(centerX), centerY_(centerY) {}

    // Copy constructor
    Point(const Point &other) : centerX_(other.centerX_), centerY_(other.centerY_) {}

    // Getters
    double getCenterX() const {return centerX_;}
    double getCenterY() const {return centerY_;}

    // Setters
    void setCenterX(double centerX) {centerX_ = centerX;}
    void setCenterY(double centerY) {centerY_ = centerY;}

    // Display
    friend ostream& operator<<(ostream &os, const Point &point) {
        os << "(" << point.centerX_ << "," << point.centerY_ << ")"; return os;}
};

#endif // POINT_H

