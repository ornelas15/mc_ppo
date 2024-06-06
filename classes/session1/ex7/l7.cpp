//~ ex7.cpp
//~ This file contains the main program

#include <stdio.h>
#include "point.h"

int main() {
  //~ Testing module functions:
  Point2D p;
  p.x = 1;
  p.y = 2;
  
  print(p);
  printf("\n");
  
  return 0;
}

// To run makefile, use make l7
// and ./l7

// Delete .o and l7 file to test CMakeLists.txt
// Run mkdir build, cd build
// cmake ..
// cmake --build .
// ./l7
