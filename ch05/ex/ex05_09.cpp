#include "std_lib_facilities.h"






int main()
try {
	vector <double> numbers;
	int N = 0, sum = 0;

	cout << "Please enter a the number of values you want to sum: ";

	cin >> N;

	cout << "Please enter some integers (press '|' to stop): ";



	double temp;

	while(cin >> temp){ // beolvassa a vecorba a beírt integereket


		if (temp == '|') break;

		numbers.push_back(temp);

	}



	vector <double> first_N;

	for (int i = 0; i < N; ++i){ // áthelyezi a firstN vectorba az első N számot és összeadja őket

		sum += numbers[i];

		first_N.push_back(numbers[i]);

	}




	vector <double> differces;

	double dif = 0;

	for (int k = 1; k < N; ++k){

		dif = first_N[k] - first_N[k-1];

		differces.push_back(dif);

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