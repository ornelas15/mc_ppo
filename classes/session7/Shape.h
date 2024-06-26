#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <string>
using namespace std;

class Point{
    private:
        int x;
        int y;

    public:
        Point(int x, int y) : x(x), y(y) {}
        // copy constructor
        Point(const Point &p) : x(p.x), y(p.y) {}
        int getX() const { return x; }
        int getY() const { return y; }
        void setX(int x) { this->x = x; }
        void setY(int y) { this->y = y; }

};


class Shape {
    private:
        Point center;
        string color;

    public:
        Shape(int x, int y, string color) : center(x, y), color(color) {}
        Shape(Point center, string color) : center(center), color(color) {}
        Point getCenter() const { return center; }
        string getColor() const { return color; }
        void setCenter(Point center) { this->center = center; }
        void setColor(string color) { this->color = color; }
        //virtual double area() const = 0;
        //virtual double perimeter() const = 0;
        virtual ~Shape() {}
        // copy constructor
        Shape(const Shape &s) : center(s.center), color(s.color) {}
        
        // assignment operator
        Shape& operator=(const Shape &s){
            if(this != &s){
                center = s.center;
                color = s.color;
            }
            return *this;
        }        

        // overload the << operator
        friend ostream& operator<<(ostream &out, const Shape &s){
            out << "Center: (" << s.center.getX() << ", " << s.center.getY() << ") Color: " << s.color;
            return out;
        }

        // comparison operator <
        bool operator<(const Shape &s) const {
            return (center.getX() < s.center.getX() && center.getY() < s.center.getY());
        }

};


class Circle : public Shape {
 private:
        double radius;

 public:
        Circle(int x, int y, string color, double radius) : Shape(x, y, color), radius(radius) {}
        Circle(Point center, string color, double radius) : Shape(center, color), radius(radius) {}
        double getRadius() const { return radius; }
        void setRadius(double radius) { this->radius = radius; }
        double area() const { return 3.14159 * radius * radius; }
        double perimeter() const { return 2 * 3.14159 * radius; }
        // copy constructor
        Circle(const Circle &c) : Shape(c), radius(c.radius) {}
        // assignment operator
        Circle& operator=(const Circle &c){
            if(this != &c){
                Shape::operator=(c);
                radius = c.radius;
            }
            return *this;
        }
        // overload the << operator
        friend ostream& operator<<(ostream &out, const Circle &c){
            out << "Center: (" << c.getCenter().getX() << ", " << c.getCenter().getY() << ") Color: " << c.getColor() << " Radius: " << c.radius;
            return out;
        }

        // comparison operator <
        bool operator<(const Circle &c) const {
            return (radius < c.radius);
        }

};






#endif // SHAPE_H