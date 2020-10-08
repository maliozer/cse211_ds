//============================================================================
// Name        : lab1_q3.cpp
// Author      : maliozer
// Copyright   : MIT
// Description : Yeditepe CSE211 Data Structures Lab1-Q3
//============================================================================

#include <iostream>
#include <tuple>

using namespace std;

tuple<int, int> get_class_constrait(short customer_class){
       if(customer_class == 1) return make_tuple(1,5);
       if(customer_class == 2) return make_tuple(6,10);
       throw invalid_argument("The class type does not exist");
}

string assignSeat(int seats_arr[], int s_type){
    tuple<int, int> seat_range = get_class_constrait(s_type);
    int const_a = get<0>(seat_range), const_b = get<1>(seat_range);

    for (int i = const_a-1; i < const_b; i++)
    {
        if(seats_arr[i] == 0){
            seats_arr[i] = 1;
            cout << "Seat No: " << i+1 << "\nClass Type: " << s_type << endl;
            return "Your seat has successfully assigned!";
        }
    }

    string change_econ;
    cout << "No available seat in this class. \n Do you want to  be placed  in  the economy section? y/n : ";
	cin >> change_econ;
	if(change_econ == "y"){
        s_type = (s_type == 1) ? 2 : 1;
        cout << "you changed seat type : " << s_type << endl;
        //recursively calling fn with new seat type
        return assignSeat(seats_arr, s_type);
	}
    else{
        return "Next flight leaves in 3 hours.";
    }
}

int main() {
	/* capacity of plane : 10 seats
	 * *display class menu : 1 | 2 other number returns "Not a valid class type"
	 * and return to the menu (loop)
	 * Please type 1 for first class Please type 2 for economy class
		 * type 1 -> between [1,5] --> 0 to 4th index
		 * type 2 -> between [6,10] --> 5 to 9th index
	 */

	//capacity of plane : 10 seats
	int seats[10];
	short class_choice;
	bool check_continue = true;
	string add_new;

	//initialize all elements as zero to imply empty seat
	for (int i = 0; i < sizeof(seats) / sizeof(seats[0]); ++i) {
		seats[i] = 0;
	}

	//loop until user exit
	while(check_continue){
		//loop the menu until break
		while(true){
			cout << "Please type 1 for first class" << endl << "Please type 2 for economy class" << endl;
			cin >> class_choice;

			//check is satisfied
			if(class_choice == 1 || class_choice == 2)
			{
				break;
			}
			else{
				cout << "Not a valid class type!" << endl;
			}
		}

		cout << assignSeat(seats, class_choice) << endl;
		cout << "Do you want to assign a new seat ? y/n" << endl;
		cin >> add_new;
		check_continue = (add_new == "y") ? true : false;
	}

	cout << "--END OF PROGRAM--" << endl;
	return 0;
}

