/*  
Lab 6 - 20-June-2024
David Ornelas

Ex.2:
Implement a program that allows you to manage geometric figures: circle, square and rectangle. 
Each figure is characterized by two mandatory attributes: color (string), centre in two-dimensional coordinate system (2D) and additional attributes that specify the dimensions of the figure (radius to circle, two sides to rectangle, one side to square). 
Take into account the concepts of encapsulation and visibility.

*/
#include "Point.h"
#include "Square.h"
#include "Circle.h"
#include "Rectangle.h"
#include <iostream>	
using namespace std;

// Main function
int main(){

    // Test all classes
    Point p1(1, 2);
    Point p2(3, 4);
    Point p3(5, 6);

    Square s1("red", p1, 5);
    Circle c1("green", p2, 10);
    Circle c2("yellow", 11, 12, 13);
    Square s2("blue", 7, 8, 9);
    Rectangle r1("orange", p3, 14, 15);
    Rectangle r2("purple", 16, 17, 18, 19);

    cout << "Square 1: (" << s1.getColor() << "," << s1.getPoint() << "," << s1.getSide() << ")" << endl;
    cout << "Square 2: (" << s2.getColor() << ",(" << s2.getCenterX() << "," << s2.getCenterY() << ")," << s2.getSide() << ")" << endl;
    cout << "Circle 1: (" << c1.getColor() << "," << c1.getPoint() << "," << c1.getRadius() << ")" << endl;
    cout << "Circle 2: (" << c2.getColor() << ",(" << c2.getCenterX() << "," << c2.getCenterY() << ")," << c2.getRadius() << ")" << endl;
    cout << "Rectangle 1: (" << r1.getColor() << "," << r1.getPoint() << "," << r1.getSideOne() << "," << r1.getSideTwo() << ")" << endl;
    cout << "Rectangle 2: (" << r2.getColor() << ",(" << r2.getCenterX() << "," << r2.getCenterY() << ")," << r2.getSideOne() << "," << r2.getSideTwo() << ")" << endl;

    // Test intersection
    cout << "Circle 1 intersects with Circle 2: " << c1.intersect(c2) << endl;

    // Test area and perimeter
    cout << "Square 1 area: " << s1.area() << endl;
    cout << "Square 1 perimeter: " << s1.perimeter() << endl;


	return 0;
	
}



