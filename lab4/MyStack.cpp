#include <iostream>
#include "MyStack.h"
#include "intSLList.h"

using namespace std;

	MyStack::MyStack(){};
	MyStack::~MyStack(){};

	void MyStack::push(int el){
		this->stack_list.addToHead(el);
		this->size++;
	}

	int MyStack::pop(){
		this->size--;
		return this->stack_list.deleteFromHead();
	}

	int MyStack::top(){
		cout << this->stack_list.firstEl() << endl;
		return 0;
	}

	int MyStack::getSize(){
		return this->size;
	}

	void MyStack::print(){
		return this->stack_list.printAll();
	}
	bool MyStack::isEmpty(){
		return this->stack_list.isEmpty();
	}




