//============================================================================
// Name        : lab1_q2.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab1-Q2
//============================================================================

#include <iostream>

using namespace std;

// palindrome text e.g. madam, lol, pop, radar

//part1
bool is_palindrome(string text){
	/*
	 * input string
	 * return bool
	 * if text is palindrome returns true otherwise false
	 *
	 */
	int text_size = text.size();
	bool flag = false;

	//search for symmetry in any contradiction set flag true and break the loop.
	for (int i = 0; i < text_size; ++i) {
		if(text[i] != text[text_size - i - 1])
		{
			flag = true;
			break;
		}
	}

	//flag is false means there is no contradiction, it is polindromic.
	if(flag == false){
		return true;
	}
	else{
		return false;
	}
}

int main() {
	//part2
	string user_input;

	cout << "Enter your text to check whether is palindrome : ";
	cin >> user_input;

	bool check = is_palindrome(user_input);

	cout << user_input << " is palindrome? : " << check << endl;

	cout << "--END OF PROGRAM--" << endl;
	return 0;
}

