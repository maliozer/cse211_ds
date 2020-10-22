/*
 * Bank.cpp
 *
 *  Created on: Oct 22, 2020
 *      Author: blanc
 */

#include "Bank.h"

Bank::Bank() {
	// TODO Auto-generated constructor stub

	for (int i = 0; i < 10; ++i) {
		string name = "name" + to_string(i);
		string pass = "1234";
		//fill account with some balance
		int balance = i * 2 + 50;

		this->accounts.push_back(BankAccount(name, pass, balance));
	}

}

Bank::~Bank() {
	// TODO Auto-generated destructor stub
}

BankAccount* Bank::find_account(string uname, string password){
	for (unsigned int j = 0; j < this->accounts.size(); ++j) {
		if (this->accounts[j].get_username() == uname && this->accounts[j].get_password() == password){
			return &(this->accounts[j]);
		}
	}

	return nullptr;
};

bool Bank::deposit(string uname, string password, int amount){
	BankAccount* current_account = Bank::find_account(uname, password);
	if(current_account != nullptr){
		current_account->set_balance(amount);
		return true;
	}
	else{
		return false;
	}

};
bool Bank::withdraw(string uname, string password, int amount){
	BankAccount* current_account = Bank::find_account(uname, password);
		if(current_account != nullptr && current_account->get_balance() >= amount){
			current_account->set_balance((-amount));
			return true;
		}
		else{
			return false;
		}
};
int Bank::get_balance(string uname, string password){
	BankAccount* current_account = Bank::find_account(uname, password);
	if(current_account != nullptr){
		return current_account->get_balance();
	}
	else{
		return false;
	}
};

bool Bank::create_account(string uname, string password){
	BankAccount* current_account = Bank::find_account(uname, password);
	if(current_account != nullptr){
		//already exist
		return false;
	}
	else{
		BankAccount account_created = BankAccount(uname, password, 0);
		this->accounts.push_back(account_created);
		return true;
	}
};

bool Bank::delete_account(string uname, string password){
	for (unsigned int j = 0; j < this->accounts.size(); ++j) {
		if (this->accounts[j].get_username() == uname && this->accounts[j].get_password() == password){
			this->accounts.erase(this->accounts.begin() + j);
			return true;
		}
	}

	return false;
};

void Bank::print_database(){
	for (unsigned int j = 0; j < this->accounts.size(); ++j) {
		cout << "|" << this->accounts[j].get_username() << " | " << this->accounts[j].get_password() <<  "|" << this->accounts[j].get_balance() << "|" << endl;
	}
};

