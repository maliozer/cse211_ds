//============================================================================
// Name        : w6_stack.cpp
// Author      : maliozer
// Version     :
// Copyright   : MIT
// Description : w6_stack implementation as linked-list & Notes
//============================================================================

#include <iostream>
using namespace std;

//node class to use as stack object
class StackNode {
	public:
		int data;
		StackNode* next;
};

//function for creating a new node
StackNode* newNode(int data){
	StackNode* stackNode = new StackNode();
	stackNode->data = data;
	stackNode->next = NULL;
	return stackNode;
}

//check the stack root points somewhere, if NULL return 0
int isEmpty(StackNode* root)
{
	return !root;
}

//push (add) new node to the top-of-the-stack (root)
/*
 * parameters explanation
 * StackNode** root means pointer of a pointer,
 * 	because we want to change root pointer which is out of the scope of push function.
 * 	we send the address of root pointer so we can manipulate inside the push function
 * 	when we add new node, simply change *root to point address of new node.
 *
 */
void push(StackNode** root, int data)
{
	StackNode* stackNode = newNode(data);
	stackNode->next = *root;
	*root = stackNode;
	cout << data << " pushed to stack\n";
}


/*	remove the data of the top node in the stack.
 * 	pointer-of-pointer (**root) is needed as well,
 * 	because after removing we change the root,
 * 	when manipulation occurs we need **pointer, otherwise *pointer is OK for only-access purpose
 * 	isEmpty is necessary to avoid from getting error if it is empty
 */
int pop(StackNode** root)
{
	if(isEmpty(*root))
	{
		return 0;
	}

	StackNode* temp = *root;
	*root = (*root)->next;
	int popped = temp->data;
	free(temp);

	//pop function also return the value of removed node's data
	return popped;
}

/* return the top of the node's data, we need only access the node,
 * we are not going to change address of root, so *root is ok.
 */
int peek(StackNode* root)
{
	if(isEmpty(root))
	{
		return 0;
	}
	return root->data;
}

//application
int main() {
	StackNode* root = NULL;

	cout << peek(root) << " : top element" << endl;

	push(&root, 10);
	push(&root, 20);
	push(&root, 30);

	cout << peek(root) << " : top element" << endl;
	cout << pop(&root) << " : popped from stack" << endl;

	cout << peek(root) << " : top element" << endl;

	cout << "END OF PROGRAM" << endl;
	return 0;
}













