
#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <algorithm>
#include <iterator>
#include <numeric>

struct Person {
    std::string name;
    int age;
};

bool iseven(int number) {
  return number % 2 == 0;
}

using namespace std;

int main() {
  vector<int> vi = {3, 4, 2, 8, 7, 1, 3, 5};

  // Count elements
  int v1 = 3, v2 = 6;
  int c1 = count(vi.begin(), vi.end(), v1);
  int c2 = count(vi.begin(), vi.end(), v2);
  int c_even = count_if(vi.begin(), vi.end(), iseven);
  // alternative: use a lambda function
  int c_odd = count_if(vi.begin(), vi.begin()+4, [](int n){return n%2;});

  cout << "number: " << v1 << " found: " << c1 << " times" << endl;
  cout << "number: " << v2 << " found: " << c2 << " times" << endl;
  cout << "found: " << c_even << " even numbers" << endl;
  cout << "found: " << c_odd << " odd number(s) in the first 4 elements" << endl;

  // Find elements
  v1 = 2;
  auto it = find(vi.begin(), vi.end(), v1);
  if( it != vi.end())
    cout << "vector contains: " << v1 << endl;
  else
    cout << "vector does not contain: " << v1 << endl;

  it = find_if(vi.begin()+4, vi.end(), iseven);
  if( it != vi.end())
    cout << "sub-vector contains an even number" << endl;
  else
    cout << "sub-vector does not contain even numbers" << endl;

  // Copy
  cout << "vi contents: ";
  copy(vi.begin(), vi.end(), ostream_iterator<int>(cout, ", "));
  cout << endl;               // ostream_iterator<int> => include <iterator>


  // Transform
  string city = "aveiro";
  string city_upper = city;
  transform(city.begin(), city.end(), city_upper.begin(), [](char c) {return toupper(c);});
  cout << "city: " << city << " -> " << city_upper << endl;


  // Partition
  it = partition(vi.begin(), vi.end(), iseven);
  cout << "vi contents: ";
  copy(vi.begin(), it, ostream_iterator<int>(cout, " "));
  cout << "<-> ";
  copy(it, vi.end(), ostream_iterator<int>(cout, " "));
  cout << endl;

  // Sorting
  vector<string> cities_v = {"porto", "aveiro", "vila real", "torres novas", "aveiro"};
  cout << "cities vector (original): ";
  copy(cities_v.begin(), cities_v.end(), ostream_iterator<string>(cout, ", "));
  cout << endl;

  set<string> cities_s = {"porto", "aveiro", "vila real", "torres novas", "aveiro"};
  cout << "set is naturally sorted: ";
  copy(cities_s.begin(), cities_s.end(), ostream_iterator<string>(cout, ", "));
  cout << endl;

  // Sorting using natural sort (ascending lexicographical order)
  sort(cities_v.begin(), cities_v.end());
  cout << "sorting cities using natural sort (ascending lexicographical order): ";
  copy(cities_v.begin(), cities_v.end(), ostream_iterator<string>(cout, ", "));
  cout << endl;

  // Sorting using greater (descending lexicographical order)
  sort(cities_v.begin(), cities_v.end(), greater<>());
  cout << "sorting cities using greater (descending lexicographical order): ";
  copy(cities_v.begin(), cities_v.end(), ostream_iterator<string>(cout, ", "));
  cout << endl;

  // Sorting using a comparator function
  auto lf1 = [](string_view s1, string_view s2){return s1.size() < s2.size();};
  sort(cities_v.begin(), cities_v.end(), lf1);
  cout << "sorting cities using a comparator function: ";
  copy(cities_v.begin(), cities_v.end(), ostream_iterator<string>(cout, ", "));
  cout << endl << endl;

  vector<Person> persons = {{"joana", 25}, {"ana", 30}, {"diana", 20}};
  map<string,vector<Person>> classes;
  classes["T2"] = persons;
  classes["T1"] = {{"maria", 25}, {"pedro", 30}, {"dina", 20}};
  cout << "--->" << classes.begin()->first << endl;
  //sort(persons.begin(), persons.end());   // Error! no natural sort is defined!!

  auto lf2 = [](const Person& p1, const Person& p2){return p1.age < p2.age; };
  sort(persons.begin(), persons.end(), lf2);
  cout << "Persons:" << endl;
  for(const auto &p: persons)
    cout << "name: " << p.name << " age: " << p.age << endl;
  cout << endl;

  // binary_search: works in ordered ranges
  vector<int> nvi = {3, 4, 7, 8, 1, 2, 3, 5};
  binary_search(nvi.begin(), nvi.end(), 7) ? cout << "found it!" : cout << "not found!";
  cout << endl;

  binary_search(nvi.begin(), nvi.begin()+4, 7) ? cout << "found it!" : cout << "not found!";
  cout << endl;

  //city = "braga";
  city = "vouzela";
  auto it_s = lower_bound(cities_s.begin(), cities_s.end(), city);
  if (it_s != cities_s.end())
    cout << city << " <= " << *it_s << " (belonging to data structure)" << endl << endl;
  else
    cout << city << " <= [not found]" << endl << endl;


  // max_element (explore also min_element and minmax_element)
  city = *max_element(cities_v.begin(), cities_v.end());
  cout << "Last city: " << city << endl;

  city = *max_element(cities_v.begin(), cities_v.end(), lf1);
  cout << "Longest city: " << city << endl;


  // Accumulate and partial_sum => #include <numeric>
  vi = {1, 2, 3, 4};
  int res = accumulate(vi.begin(), vi.end(), 0);
  cout << "Sum of vi elements: " << res << endl;

  res = accumulate(vi.begin(), vi.end(), 1, multiplies<>());
  cout << "Product of vi elements: " << res << endl;

  // Concatenating strings and transversing the vector in reverse order
  auto lf3 = [](const string &s1, const string &s2){return s1 + " | " + s2; };
  string allCities = accumulate(cities_v.rbegin()+1, cities_v.rend(), *cities_v.rbegin(), lf3);
  cout << allCities << endl;

  cout << "Partial sum: ";
  partial_sum(vi.begin(), vi.end(), ostream_iterator<int>(cout, ", "));

  cout << endl << "Partial product: ";
  partial_sum(vi.begin(), vi.end(), ostream_iterator<int>(cout, ", "), multiplies<>());
  cout << endl;

  return 0;
}