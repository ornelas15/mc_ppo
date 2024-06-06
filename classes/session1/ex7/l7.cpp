//~ ex7.cpp
//~ This file contains the main program

#include <stdio.h>
#include "point.h"
#include <iostream>
using namespace std;
#include <cmath>
#include <vector>

int main() {

  Point2D p;
  int points = 0;
  vector<Point2D> all_points;
  // variables for distance
  double distance = 0.0;
  double total_distance = 0.0;
  // variables for max distance
  double max_distance = 0.0;
  Point2D max_point;

  // Ask for a point until the user enters (0,0)  
  while (true) {
    // Ask input
    cout << "Enter a point: ";
    // Save input
    cin >> p.x >> p.y;

    // Break if point is (0,0)
    if (p.x == 0 && p.y == 0) break; 

    // Count points
    points++;
    // Save points
    all_points.push_back({p.x, p.y});
    
    // Calculate distance to origin (x-0,y-0)
    distance = sqrt(p.x * p.x + p.y * p.y);
    total_distance += distance;

    // Furthest distance to origin
    if (distance > max_distance) {
      max_distance = distance;
      max_point = {p.x, p.y};
    }

  }

  // Count number of points entered
  cout << "\nNumber of points entered: " << points << endl;

  /*// Check points saved
  for (int i = 0; i < all_points.size(); i++) {
    cout << "Point " << i+1 << ": " << all_points[i].x << " " << all_points[i].y << endl;
  }
  */

  // Calculate sum of distances to the origin
  cout << "Sum of distances to the origin: " << total_distance << endl;

  // Furthest point from the origin
  cout << "Furthest point from the origin: (" << 
  max_point.x << ", " << max_point.y << ")" << endl;

  return 0;
}

// To run makefile, use make l7
// and ./l7

// Delete .o and l7 file to test CMakeLists.txt
// Run mkdir build, cd build
// cmake ..
// cmake --build .
// ./l7
