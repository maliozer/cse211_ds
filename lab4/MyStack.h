#include "intSLList.h"

class MyStack{
private:
	IntSLList stack_list;
	int size = 0;

public:
	MyStack();
	~MyStack();

	void push(int el);
	int pop();
	int top();

	int getSize();
	void print();
	bool isEmpty();
};
