/*
 * PhoneBook.h
 *
 *  Created on: Oct 22, 2020
 *      Author: blanc
 */

#ifndef PHONEBOOK_H_
#define PHONEBOOK_H_

#include <map>
#include <vector>
#include <iostream>
using namespace std;

class PhoneBook {

private:
	map<string, string> phonerecord;
	map<string, string>::iterator itr;
	string* nameref = nullptr;

public:
	PhoneBook();
	virtual ~PhoneBook();

	bool add_record(string name, string phone);
	bool remove_record(string name);
	string get_number(string name);
	bool get_name(string number);

	void print_book();

};

#endif /* PHONEBOOK_H_ */
