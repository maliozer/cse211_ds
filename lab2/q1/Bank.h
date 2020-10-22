/*
 * Bank.h
 *
 *  Created on: Oct 22, 2020
 *      Author: blanc
 */

#ifndef BANK_H_
#define BANK_H_

#include "BankAccount.h"
#include <vector>
#include <iostream>

class Bank {
private:
	vector<BankAccount> accounts;
public:
	Bank();
	virtual ~Bank();

	BankAccount* find_account(string uname, string password);

	bool deposit(string uname, string password, int amount);
	bool withdraw(string uname, string password, int amount);
	int get_balance(string uname, string password);

	bool create_account(string uname, string password);
	bool delete_account(string uname, string password);

	void print_database();


};

#endif /* BANK_H_ */
