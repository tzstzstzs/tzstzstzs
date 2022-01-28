#include "../../../std_lib_facilities.h"

double get_sum(vector<double> num, int a){
	double final = 0;
	
	for (int i = 0; i < a; ++i){ // az első N számot összeadja
		final += num[i];
		if (final >= 2147483647)
			error("Cannot be held in integer");
	}

	return final;
}


int main()
try {
	int N = 0;
	double sum = 0;

	cout << "Please enter a the number of values you want to sum: ";
	cin >> N;
	cout << "Please enter some integers (press '|' to stop): ";


	vector <double> numbers;
	double temp;
	while(cin >> temp){ // beolvassa a vecorba a beírt integereket
		if (temp == '|') break;

		numbers.push_back(temp);
	}

	if (numbers.size() < N) error("out_of_range");

	sum = get_sum(numbers, N);

	vector<double> differences;
	for(int i = 0; i < numbers.size()-1; ++i){
		double temp;
		temp = numbers[i+1] - numbers[i];
		differences.push_back(temp);
	}


	cout << "The sum of the first " << N << " numbers ( ";
	for (int j = 0; j < N; ++j){ // listázza az első N számot

		cout << numbers[j] << " ";
	}
	cout << ") is " << sum << ".\n";

	cout << "Differences: ";
	for(int k = 0; k < differences.size(); ++k){
		cout << differences[k] << ' ';
	}
	cout << endl;

	return 0;

}catch (out_of_range) {

	cerr << "Range error\n";
	return 1;

} catch (runtime_error& e) {
	cout << "Runtime error: " << e.what() << "\n";


}catch (...) {

	cerr << "Exception: something went wrong!\n";
	return 2;
} 