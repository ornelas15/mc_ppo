/*  
Lab 3 - 12-June-2024
David Ornelas

Ex.6: 
Write a function countdown(N) which prints a countdown 
starting from a positive number N.  Test it in a program which 
requests the value of N to the user. Do not use loops.: 

*/

#include <iostream>	
using namespace std;

// recursive function to countdown from N
void countdown(int N){
	if (N < 0){
		cout << "Please enter a positive number." << endl;
	}
	else if (N == 0){
		cout << N << endl;
	}
	else{
		cout << N << endl;
		countdown(N - 1);
	}
}

int main(){

	int N;
	cout << "Enter a positive number: ";
	cin >> N;
	countdown(N);
	return 0;
}



