#include "std_lib_facilities.h"

int main()
{
	cout << "Please enter a double: ";

	double smallest = 0, largest = 0, temp = 0;

	cin >> temp;

	cout << "The value is: " << temp;

	largest = temp;
	smallest = temp;

	while (cin >> temp){
		
		cout << "Please enter a double: ";

		if(temp > largest){
			largest = temp;
			cout << "The value is: " << largest << " The largest so far.";
		}
		else if(temp < smallest){
			smallest = temp;
			cout << "The value is: " << smallest << " The smallest so far.";
		}
	}

	return 0;
}