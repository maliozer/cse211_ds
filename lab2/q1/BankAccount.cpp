/*
 * BankAccount.cpp
 *
 *  Created on: Oct 22, 2020
 *      Author: blanc
 */

#include "BankAccount.h"

BankAccount::BankAccount(string username, string password, int balance) {
	// TODO Auto-generated constructor stub
	this->username = username;
	this->password = password;
	this->balance = balance;
}

BankAccount::~BankAccount() {
	// TODO Auto-generated destructor stub
}

string BankAccount::get_username(){
	return username;
}
string BankAccount::get_password(){
	return password;
}
int BankAccount::get_balance(){
	return this->balance;
}

void BankAccount::set_username(string username){
	this->username =username;
}
void BankAccount::set_password(string password){
	this->password =password;
}
void BankAccount::set_balance(int balance){
	this->balance += balance;
}


