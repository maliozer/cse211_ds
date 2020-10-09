//============================================================================
// Name        : lab1_q4.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab1-Q4 pancake
//============================================================================

#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

struct people
{
    string name;
    int n_pancake;
};

people setPeople(string user_info){
    people p1;

    vector <string> tokens;
    string token;

    stringstream string_stream(user_info);

    while(getline(string_stream, token, '-'))
    {
        tokens.push_back(token);
    }

    p1.name = tokens[0];
    p1.n_pancake = stoi(tokens[1]);

    return p1;
}

string find_maxmin(vector<people> arr, short is_max){
	int flag = arr[0].n_pancake;
	string flagged_person = arr[0].name;

	for (int i = 1; i < arr.size(); ++i) {
		if(is_max){
			if(arr[i].n_pancake > flag){
				flag = arr[i].n_pancake;
				flagged_person = arr[i].name;
			}
		}
		else{
			if(arr[i].n_pancake < flag){
				flag = arr[i].n_pancake;
				flagged_person = arr[i].name;
			}
		}
	}
	return flagged_person;
}

vector<people> sortPersons(vector<people> persons, bool asc = true){

	for (int n = 0; n < persons.size()-1; ++n) {
		int pos_flag = n;
		if(asc){
			for (int i = pos_flag; i < persons.size(); ++i) {
				if(persons[i].n_pancake <  persons[pos_flag].n_pancake){
					pos_flag = i;
				}
			}
		}
		else{
			for (int i = pos_flag; i < persons.size(); ++i) {
				if(persons[i].n_pancake >  persons[pos_flag].n_pancake){
					pos_flag = i;
				}
			}
		}
		swap(persons[n], persons[pos_flag]);
	}

	return persons;
}

string getPerson(vector<people> persons, int desired_cakenumber){
	string found_name = "Not Found!";

	for (int i = 0; i < persons.size(); ++i) {
		if(persons[i].n_pancake == desired_cakenumber){
			found_name = persons[i].name;
			return found_name;
		}
	}
	return found_name;
}

//pancake game
int main() {
	int key;
	bool menu = true;
    string line;
    vector <people> persons;

    cout << "enter the number of pancakes eaten by 7 people : " <<  endl;
    while(persons.size() < 7){

        cout << "Enter person no-" << persons.size() + 1 << ": ";

        cin >> line;

        persons.push_back(setPeople(line));

    }

while(menu){
	cout << "1: Get person ate most" << endl;
	cout << "2: Get person ate least" << endl;
	cout << "3: Compare any two people based on pancakes they ate" << endl;
	cout << "4: Find out the name of the person who ate a spesific number pncke" << endl;
	cout << "5: sort people ascending" << endl;
	cout << "6: sort people descending" << endl;
	cout << "7: EXIT" << endl;

	cin >> key;
    switch (key) {
		case 1:
			cout << "The person ate most is : " << find_maxmin(persons, 1) << endl;
			break;
		case 2:
			cout << "The person ate least is : " << find_maxmin(persons, 0) << endl;
			break;
		case 3:

			break;
		case 4:
			int cake_number;

			cout << "Enter the number of eaten pancake: ";
			cin >> cake_number;
			cout << "The person name : " << getPerson(persons,cake_number) << endl;
			break;
		case 5:

			persons = sortPersons(persons);

			cout << "----ASCENDING SORT----" << endl;

			for (int j = 0; j< persons.size(); ++j) {
				cout << persons[j].name << " ate " << persons[j].n_pancake << endl;
			}

			break;
		case 6:
			persons = sortPersons(persons,false);

			cout << "----DESCENDING SORT----" << endl;

			for (int j = 0; j< persons.size(); ++j) {
				cout << persons[j].name << " ate " << persons[j].n_pancake << endl;
			}

			break;
		case 7:
			menu = false;
			break;
		default:
			break;
	}
}


    /*
     * Next, your program will perform the following operations over these data.
     * • to identify the person who ate the most and the person who ate the least
     * • to compare any two people based on the number of pancakes they ate
     * • to find out the name of the person who ate a specific number of pancakes
     * • to sort the people in ascending and descending order based on the number of cakes they ate
     *
     */

    cout << "---END OF PROGRAM---" << endl;
    return 0;
}

