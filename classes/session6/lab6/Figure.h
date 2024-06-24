#ifndef FIGURE_H
#define FIGURE_H

#include <iostream>
#include <string>
#include <cmath>
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

class Circle {
private:
    // Private attributes (color, center, radius)
    string color_;
    double centerX_;
    double centerY_;
    double radius_;
    Point point_;

public:
    // Empty constructor
    Circle() : color_(""), centerX_(0), centerY_(0), radius_(0){}

    // Constructor without Point class
    Circle(string color, double centerX, double centerY, double radius) : color_(color),  centerX_(centerX), centerY_(centerY), radius_(radius){}
    
    // Constructor with Point class
    Circle(string color, Point point, double radius) : color_(color), point_(point), radius_(radius){}

    // Copy constructor
    Circle(const Circle &other) : color_(other.color_), point_(other.point_), radius_(other.radius_){}

    // Getters
    string getColor() const {return color_;}
    double getCenterX() const {return centerX_;}
    double getCenterY() const {return centerY_;}
    double getRadius() const {return radius_;}
    Point getPoint() const {return point_;}

    // Setters
    void setColor(string color) {color_ = color;}
    void setCenterX(double centerX) {centerX_ = centerX;}
    void setCenterY(double centerY) {centerY_ = centerY;}
    void setRadius(double radius) {radius_ = radius;}
    void setPoint(Point point) {point_ = point;}

    // Area
    double area() const {return 3.14 * radius_ * radius_;}

    // Perimeter
    double perimeter() const {return 2 * 3.14 * radius_;}

    // Verify intersection between two circles
    bool intersect(const Circle &other) const {
        double distance = sqrt(pow(centerX_ - other.centerX_, 2) 
        + pow(centerY_ - other.centerY_, 2));
        // If the distance between the centers of the two circles is less than or equal to the sum of the radius of the two circles, then the circles intersect
        return distance <= radius_ + other.radius_ && 
        distance >= abs(radius_ - other.radius_);
    }

    // Display
    friend ostream& operator<<(ostream &os, const Circle &circle) {
        os << "Circle Color: " << circle.color_ << endl;
        os << "Circle Center: " << circle.point_ << endl;
        os << "Circle Radius: " << circle.radius_ << endl;
        return os;}

};

#endif // FIGURE_H

