/*  
Lab 6 - 20-June-2024
David Ornelas
Introduction to Classes
*/

#include <iostream>
#include "Person.h"	
using namespace std;


// Main function
int main(){

	Person person;

	cout << person.getName() << endl;

	cout << "Fill in the person's name and age: " << endl;
	cin >> person;
	cout <<  person.getName() << endl;

	person.setName("David");
	person.setAge(20);
	cout << "Person Name: " << person.getName() << endl;
	cout << "Age: " << person.getAge() << endl;

	Person person2;
	person2.setName("John");
	person2.setAge(30);
	cout << "Person 2 Name: " << person2.getName() << endl;

	Person person3(person2);
	cout << "Person 3 Name: " << person3.getName() << endl;

	person3 = person + person2;
	cout << "Person 3 Name: " << person3.getName() << endl;

	person += person3;
	cout << "Person Name from Person 3: " << person.getName() << endl;

	return 0;

}



