//============================================================================
// Name        : q1.cpp
// Author      : maliozer
// Version     :
// Copyright   : MIT
// Description : lab queue q1
//============================================================================

#include <iostream>
#include <stack>
using namespace std;

class labque{
private:
	stack<char> s1;
	stack<char> s2;
public:
	void enqueue(char c){
		if(s1.empty()){
			s1.push(c);
		}
		else
		{
			//fill the s2
			while(!s1.empty()){
				s2.push(s1.top());
				s1.pop();
			}
			s2.push(c);

			while(!s2.empty()){
				s1.push(s2.top());
				s2.pop();
			}
		}
	}

	void dequeue(){
		s1.pop();
	}

	void print_all(){
		while(!s1.empty())
		{
			cout << s1.top() << endl;
			s1.pop();
		}

	}
};

using namespace std;

int main() {
	cout << "start" << endl;
	labque q1;

	string text = "abcdefgh";

	for (unsigned int i = 0; i < text.length(); i++) {
		q1.enqueue(text[i]);
	}

	q1.print_all();

	cout << "END OF PROGRAM" << endl;
	return 0;
}

