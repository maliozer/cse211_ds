//============================================================================
// Name        : main.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab2-Q2 PhoneBook
//============================================================================

#include "PhoneBook.h"

using namespace std;
//using namespace PhoneBook::PhoneBook;

int main() {
	PhoneBook phonebook = PhoneBook();

	for (int i = 0; i < 10; ++i) {
		string name = "people" + to_string(i);
		string phone = "11122" + to_string(2*11 + i); //fill unique phones
		phonebook.add_record(name, phone);
	}

	phonebook.add_record("mehmetali", "05457894512");

	cout << "RECORDS DONE" << endl;

	phonebook.print_book();

	cout << phonebook.get_number("mehmetali") << endl;

	cout << phonebook.get_name("05457894512") << endl;

	cout << "END OF PROGRAM" << endl;

    return 0;
}






