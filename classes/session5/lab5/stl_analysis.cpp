#include <iostream>
#include <chrono>
#include <cstdlib>
#include <vector>
#include <algorithm>

#define LEN 10000
#define UPLIM 1000

using namespace std;
using namespace std::chrono;

int main() {
  vector<int> rvector;
  
  //~ Filling the vector
  high_resolution_clock::time_point t1 = high_resolution_clock::now();
  for(size_t i = 0 ; i < LEN ; i++)
    rvector.push_back(rand()%UPLIM);
  
  high_resolution_clock::time_point t2 = high_resolution_clock::now();
  auto duration = duration_cast<microseconds>( t2 - t1 ).count();
  cout << "Code execution time for filling the vector: " << duration << " microseconds\n";
  
  //~ Searching (sequential)
  int svalue = 200;
  cout << "Searching for " << svalue << " in the vector...";
  
  t1 = high_resolution_clock::now();
  auto it = find(rvector.begin(), rvector.end(), svalue);
  t2 = high_resolution_clock::now();
  duration = duration_cast<microseconds>( t2 - t1 ).count();
  
  if (it != rvector.end())
    cout << "fount it at " << (it-rvector.begin()) 
	 << " in "  << duration << " microseconds\n";
  else
    cout << "not found! (in " << duration << " microseconds).\n";
  
  //~ Sorting
  t1 = high_resolution_clock::now();
  sort(rvector.begin(), rvector.end());
  t2 = high_resolution_clock::now();
  duration = duration_cast<microseconds>( t2 - t1 ).count();
  
  cout << "Sorting done in " << svalue << " microseconds." << endl;
  
  //~ Binary search for checking if vector contains a value
  t1 = high_resolution_clock::now();
  auto tf = binary_search(rvector.begin(), rvector.end(), svalue);
  t2 = high_resolution_clock::now();
  duration = duration_cast<microseconds>( t2 - t1 ).count();
  cout << "Binary search: ";
  if (tf)
    cout << "Contains! (in " << duration << " microseconds).\n";
  else
    cout << "Not found! (in " << duration << " microseconds).\n";
  
  //~ Emptying the vector using pop_back
  t1 = high_resolution_clock::now();
  while (rvector.size()>0)
    rvector.pop_back();
  t2 = high_resolution_clock::now();
  duration = duration_cast<microseconds>( t2 - t1 ).count();
  cout << "Code execution time for emptying the vector: " << duration << " microseconds\n";
  
  //~ Erasing the vector
  t1 = high_resolution_clock::now();
  rvector.erase(rvector.begin(), rvector.end());
  t2 = high_resolution_clock::now();
  duration = duration_cast<microseconds>( t2 - t1 ).count();
  cout << "Code execution time for erasing the vector: " << duration << " microseconds\n";
  
  return 0;
}
