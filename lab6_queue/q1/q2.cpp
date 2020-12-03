//============================================================================
// Name        : q2.cpp
// Author      : maliozer
// Version     :
// Copyright   : MIT
// Description : lab queue q2
//============================================================================

#include <iostream>
#include <stack>
#include <math.h>

using namespace std;

void printAllPatterns(string pattern){
	int marked_count = 0;
	stack<int> binary_base;
	stack<int> s1;

	for (unsigned int i = 0; i < pattern.length(); ++i) {
		if(pattern[i] == '?'){
			marked_count ++;
		}
	}

	for (int j = 0; j < pow(2,marked_count); ++j) {
		int n = j;
		bool flag = false;
		//cout << "n is : " << n << endl;
		while(!flag){
			s1.push(n%2);
			n /= 2;

			if(n == 0){
				flag = true;

				while(s1.size() < 4){
					s1.push(0);
				}

				for (int p = 0; p < pattern.length(); ++p) {
					if(pattern[p] != '?'){
						cout << pattern[p];
					}
					else{
						cout << s1.top();
						s1.pop();
					}

				}



			}//end if

		}//endwhile
		cout << "\n";
	}//endfor

}

int main() {

	printAllPatterns("​1?11?00?1?");

	cout << "END OF PROGRAM" << endl;
	return 0;
}

