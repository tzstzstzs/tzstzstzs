#include "std_lib_facilities.h"

int main()
try {
	vector <int> numbers;
	int N = 0, sum = 0;

	cout << "Please enter a the number of values you want to sum: ";

	cin >> N;

	cout << "Please enter some integers (press '|' to stop): ";



	int temp;

	while(cin >> temp){ // beolvassa a vecorba a beírt integereket


		if (temp == '|') break;

		numbers.push_back(temp);

	}

	//if (numbers.size() < N) error("out_of_range");



	vector <int> first_N;

	for (int i = 0; i < N; ++i){ // áthelyezi a firstN vectorba az első N számot és összeadja őket

		sum += numbers[i];

		if (sum >= 2147483647){
			error("Cannot be held in integer");
			return ;
		}

		first_N.push_back(numbers[i]);

	}

	cout << "The sum of the first " << N << " numbers ( ";

	for (int j = 0; j < first_N.size(); ++j){ // listázza az első N számot

		cout << first_N[j] << " ";
	}

	cout << ") is " << sum << ".\n";


	return 0;

}catch (out_of_range) {

	cerr << "Range error\n";
	return 1;

} catch (runtime_error& e) {
	cout << "Runtime error\n";

}catch (...) {

	cerr << "Exception: something went wrong!\n";
	return 2;

} 
