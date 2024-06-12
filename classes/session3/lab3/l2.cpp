/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.2
The body mass index (BMI) is a measure used to evaluate how far the weight of
a normal person deviates from the "ideal" weight. 
It is given by weight/height², with the weight measured in kilograms and the height
measured in meters. Create a function, BMI(weight, height), to calculate the body mass 
index. Write another function to classify the BMI according to the following table.
Use these functions in a program that requests weight and height to the user and 
prints the BMI and the corresponding category.
*/

#include <iostream>	
#include <iomanip>
using namespace std;

double BMI(int weight, double height){
	height = height/100;
	return weight/(height*height);
}

void classifyBMI(double BMI){
	if (BMI < 18.5){
		cout << "Underweight" << endl;
	}
	else if (BMI >= 18.5 && BMI < 24.9){
		cout << "Normal" << endl;
	}
	else if (BMI >= 24.9 && BMI < 29.9){
		cout << "Overweight" << endl;
	}
	else{
		cout << "Obese" << endl;
	}
}


int main(){

	// Declare variables
	int weight;
	double height;

	// Ask user for weight and height
	cout << "Enter your weight in kilograms: ";
	cin >> weight;
	cout << "Enter your height in centimeters: ";
	cin >> height;

	// Call function and display the BMI
	double bmi = BMI(weight, height);
	cout << "Your body mass index is: " << bmi << endl;
	cout << "You are: "; classifyBMI(bmi);

	return 0;
}



