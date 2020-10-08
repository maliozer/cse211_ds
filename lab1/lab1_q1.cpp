//============================================================================
// Name        : lab1_q1.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab1-Q1
//============================================================================

#include <iostream>

using namespace std;


int main() {
	int number_of_passed = 0;
	int number_of_failed = 0;
	string delimeter = "-";

	for (int i = 1; i < 11; ++i) {
		string user_input;
		string token;

		//PART1
		cout << "\n Enter result: ";
		cin >> user_input;

		token = user_input.substr(user_input.find(delimeter) + 1, user_input.length());

		//PART2
		if(token == "1"){
			number_of_passed += 1;
		}
		else if(token == "2"){
			number_of_failed += 1;
		}

		//PART3
		cout << "Number of passed student : " << number_of_passed << endl;
		cout << "Number of failed student : " << number_of_failed << endl;

		//PART4
		if(number_of_passed >= 8){
			cout << "Raise tuition." << endl;
		}

	}

	cout << "--END OF PROGRAM--" << endl;
	return 0;
}

