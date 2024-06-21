#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class Rectangle {
private:
    // Private attributes (color, center, sideOne, sideTwo)
    string color_;
    double centerX_;
    double centerY_;
    double sideOne_;
    double sideTwo_;
    Point point_;

public:
    // Empty constructor
    Rectangle() : color_(""), centerX_(0), centerY_(0), sideOne_(0), sideTwo_(0) {}

    // Constructor without Point class
    Rectangle(string color, double centerX, double centerY, double sideOne, double sideTwo) : color_(color),  centerX_(centerX), centerY_(centerY), sideOne_(sideOne), sideTwo_(sideTwo){}
    
    // Constructor with Point class
    Rectangle(string color, Point point, double sideOne, double sideTwo) : color_(color), point_(point), sideOne_(sideOne), sideTwo_(sideTwo){}

    // Copy constructor
    Rectangle(const Rectangle &other) : color_(other.color_), point_(other.point_), sideOne_(other.sideOne_), sideTwo_(other.sideTwo_){}

    // Getters
    string getColor() const {return color_;}
    double getCenterX() const {return centerX_;}
    double getCenterY() const {return centerY_;}
    double getSideOne() const {return sideOne_;}
    double getSideTwo() const {return sideTwo_;}
    Point getPoint() const {return point_;}

    // Setters
    void setColor(string color) {color_ = color;}
    void setCenterX(double centerX) {centerX_ = centerX;}
    void setCenterY(double centerY) {centerY_ = centerY;}
    void setSideOne(double sideOne) {sideOne_ = sideOne;}
    void setSideTwo(double sideTwo) {sideTwo_ = sideTwo;}
    void setPoint(Point point) {point_ = point;}

    // Area
    double area() const {return sideOne_ * sideTwo_;}

    // Perimeter
    double perimeter() const {return 2 * (sideOne_ + sideTwo_);}

    // Display
    friend ostream& operator<<(ostream &os, const Rectangle &Rectangle) {
        os << "Rectangle Color: " << Rectangle.color_ << endl;
        
        if (Rectangle.centerX_ != 0 && Rectangle.centerY_ != 0) {
            os << "Rectangle Center: (" << Rectangle.centerX_ << ", " << Rectangle.centerY_ << ")" << endl;}
        else{os << "Rectangle Center: " << Rectangle.point_ << endl;}
        
        os << "Rectangle Side One: " << Rectangle.sideOne_ << endl;
        os << "Rectangle Side Two: " << Rectangle.sideTwo_ << endl;
        return os;
    }

};

#endif // RECTANGLE_H

