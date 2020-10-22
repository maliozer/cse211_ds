/*
 * PhoneBook.cpp
 *
 *  Created on: Oct 22, 2020
 *      Author: blanc
 */

#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	// TODO Auto-generated constructor stub
}

PhoneBook::~PhoneBook() {
	// TODO Auto-generated destructor stub
}


bool PhoneBook::add_record(string name, string phone){
	this->phonerecord.insert(pair<string, string>(name, phone));
	return 0;
}
bool PhoneBook::remove_record(string name){
	//erase by key
	this->phonerecord.erase(name);
	return 0;
}

string PhoneBook::get_number(string name){
	//find number of person
	this->itr = this->phonerecord.find(name);
	if(this->itr != this->phonerecord.end()){
		return this->itr->second;
	}
	return "Not found!";
}

bool PhoneBook::get_name(string number){
	//get the name of person of given number
	for (this->itr = this->phonerecord.begin(); this->itr != this->phonerecord.end(); ++this->itr) {
		if(this->itr->second == number){
			cout << itr->first << endl;
			return true;
		}
	}
	return false;
}

void PhoneBook::print_book(){
	//console out all person-phone pairs on phonebook
	for (this->itr = this->phonerecord.begin(); this->itr != this->phonerecord.end(); ++this->itr) {
		cout << this->itr->first << "\t" << this->itr->second << endl;
	}
}
