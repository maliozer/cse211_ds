//============================================================================
// Name        : main.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab2-Q1 Bank & BankAccount
//============================================================================

#include "Bank.h"

using namespace std;

int main() {

	//create bank instance
	Bank YapiKredi;

	//found_account calling
	BankAccount* found_account = YapiKredi.find_account("name2", "1234");
	cout << "This is founded ptr: " << found_account->get_username() << " : " << found_account->get_balance() << endl;


	//deposit ->returns true (1)
	cout << "Is deposit successful: " << YapiKredi.deposit("name2", "1234",16) << endl;

	//withdraw ->returns true (1)
	cout << "Is withdraw successful: " << YapiKredi.withdraw("name2", "1234",7) << endl;

	//get_balance
	cout<< "The balance : " << YapiKredi.get_balance("name2", "1234") << endl;

	//create account
	cout<< "Is created : " << YapiKredi.create_account("maliozer", "4321") << endl;

	//delete_account
	cout<< "Is deleted : " << YapiKredi.delete_account("name2", "1234") << endl;

	//print_database
	YapiKredi.print_database();


	cout << "END OF PROGRAM" << endl;

    return 0;
}
























