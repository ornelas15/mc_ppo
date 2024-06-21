#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class Square {
private:
    // Private attributes (color, center, side)
    string color_;
    double centerX_;
    double centerY_;
    double side_;
    Point point_;

public:
    // Empty constructor
    Square() : color_(""), centerX_(0), centerY_(0), side_(0) {}

    // Constructor without Point class
    Square(string color, double centerX, double centerY, double side) : color_(color),  centerX_(centerX), centerY_(centerY), side_(side){}
    
    // Constructor with Point class
    Square(string color, Point point, double side) : color_(color), point_(point), side_(side){}

    // Copy constructor
    Square(const Square &other) : color_(other.color_), point_(other.point_), side_(other.side_){}

    // Getters
    string getColor() const {return color_;}
    double getCenterX() const {return centerX_;}
    double getCenterY() const {return centerY_;}
    double getSide() const {return side_;}
    Point getPoint() const {return point_;}

    // Setters
    void setColor(string color) {color_ = color;}
    void setCenterX(double centerX) {centerX_ = centerX;}
    void setCenterY(double centerY) {centerY_ = centerY;}
    void setSide(double side) {side_ = side;}
    void setPoint(Point point) {point_ = point;}

    // Area
    double area() const {return side_ * side_;}

    // Perimeter
    double perimeter() const {return 4 * side_;}

    // Display
    friend ostream& operator<<(ostream &os, const Square &Square) {
        os << "Square Color: " << Square.color_ << endl;
        os << "Square Center: " << Square.point_ << endl;
        os << "Square Side: " << Square.side_ << endl;
        return os;
    }

};

#endif // SQUARE_H

