#include "std_lib_facilities.h"

int main()
{
	double smallest = 0, largest = 0, temp = 0;
	vector <double> numbers;

	cout << "Please enter a double: ";

	cin >> temp;

	numbers.push_back(temp);

	cout << "The value is: " << temp;

	largest = temp;
	smallest = temp;

	cout << "\nPlease enter a double: ";

	while (cin >> temp){
		
		numbers.push_back(temp);

		if(temp > largest){
			largest = temp;
			cout << "The value is: " << largest << " The largest so far.";
		}
		else if(temp < smallest){
			smallest = temp;
			cout << "The value is: " << smallest << " The smallest so far.";
		}

		cout << "\nPlease enter a double: ";

	}

	int count = 0, mean = 0, mean_nr = 0;

	for(int i = 0; i < numbers.size(); i++){

		count++;

		for(int j = i; j < numbers.size(); j++){

			if(numbers[i] == numbers[j] && i != j){

				count++;

				if(count > mean_nr){
					mean_nr = count;
					mean = numbers[i];
				}
			}
		}
	}

	cout << "The mean number is: " << mean << endl;

	return 0;
}