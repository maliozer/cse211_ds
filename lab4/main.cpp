//============================================================================
// Name        : main.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab2-Q2 PhoneBook
//============================================================================

#include <iostream>
#include "MyStack.h"

using namespace std;
//using namespace PhoneBook::PhoneBook;

int main() {
	MyStack ms;
	cout << " is empty " << ms.isEmpty() << endl;

	ms.push(5);
	ms.push(7);
	ms.push(8);
	ms.push(9);

	cout << " is empty " << ms.isEmpty() << endl;

	cout << "the top : " << ms.top() << endl;
	cout << "remove top: " << ms.pop() << endl;

	cout << "new top : " << ms.top() << endl;

	cout << "size : " << ms.getSize() << endl;

	ms.print();

	cout << "END OF PROGRAM" << endl;

    return 0;
}



