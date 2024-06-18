/*  
Lab 4 - 13-June-2024
David Ornelas

Ex.6
Implement a program that simplifies management of several teams of indoor soccer (5 players). 
For each team, the user has to input the numbers of 5 players (all different - explore the use of the set container).  
After  a team has been formed, the program should ask whether the user wants to add another team (the response can be 'y' or 'n'). 
Suggestion: consider the use of a vector of sets.

*/

#include <iostream>	
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <limits>
#include <set>
using namespace std;

// Function to add a team (save pointers to the teams)
void addTeam(vector<set<int>> &teams){
	set<int> team;
	int player;
	cout << "Enter the numbers of 5 players for the team: " << endl;
	for (int i = 0; i < 5; i++){
		while (true) {
			if (cin >> player) {
				// Check if the player is already in the team
				if (team.find(player) != team.end()){
					cout << "Player already in the team. Please enter another number: ";
					continue;
				}
				team.insert(player);
				break; 
			} else {
				cout << "Invalid input. Please enter a number: ";
				cin.clear(); cin.ignore(numeric_limits<streamsize>::max(), '\n');
			}
		}
	}
	teams.push_back(team);
}


int main(){

	vector<set<int>> teams;
	char op;
	do{
		addTeam(teams);
		cout << "Do you want to add another team? (y/n): ";
		cin >> op;
		cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
	} while (op == 'y');
	
	// Print the teams
	cout << "Teams: " << endl;
	for (int i = 0; i < teams.size(); i++){
		cout << "\nTeam " << i + 1 << ": ";
		for (auto j = teams[i].begin(); j != teams[i].end(); j++){
			if (next(j) == teams[i].end()) cout << *j << ";";
			else cout << *j << ", ";
		}
		cout << endl;
	}

	return 0;
}



