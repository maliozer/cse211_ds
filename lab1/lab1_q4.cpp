//============================================================================
// Name        : lab1_q4.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab1-Q4 pancake
//============================================================================

#include <iostream>
#include <sstream>
#include <vector>

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

//pancake game
int main() {
    string line;
    vector <people> persons;

    while(persons.size() < 7){
        cout << "enter the number of pancakes eaten by 7 people : " <<  endl;
        cout << "Enter person no-" << persons.size() + 1 << ": ";

        cin >> line;

        persons.push_back(setPeople(line));

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

