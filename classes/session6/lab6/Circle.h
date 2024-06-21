#ifndef CIRCLE_H
#define CIRCLE_H

#include <iostream>
#include <string>
#include <cmath>
#include "Point.h"
using namespace std;

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

#endif // CIRCLE_H

