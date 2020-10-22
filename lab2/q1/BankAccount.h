/*
 * BankAccount.h
 *
 *  Created on: Oct 22, 2020
 *  Author: maliozer
 *
 */

#ifndef BANKACCOUNT_H_
#define BANKACCOUNT_H_

#include <string>
using namespace std;

class BankAccount {
private:
	string username;
	string password;
	int balance = 0;

public:
	BankAccount(string username, string password, int balance);
	virtual ~BankAccount();

	string get_username();
	string get_password();
	int get_balance();

	void set_username(string username);
	void set_password(string password);
	void set_balance(int balance);
};

#endif /* BANKACCOUNT_H_ */



