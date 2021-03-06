#include "../../../std_lib_facilities.h"

int get_sum(vector<int> num, int a){
	int final = 0;
	
	for (int i = 0; i < a; ++i){ // az első N számot összeadja
		final += num[i];
		if (final >= 2147483647)
			error("Cannot be held in integer");
	}

	return final;
}


int main()
try {
	int N = 0, sum = 0;

	cout << "Please enter a the number of values you want to sum: ";
	cin >> N;
	cout << "Please enter some integers (press '|' to stop): ";


	vector <int> numbers;
	int temp;
	while(cin >> temp){ // beolvassa a vecorba a beírt integereket
		if (temp == '|') break;

		numbers.push_back(temp);
	}

	if (numbers.size() < N) error("out_of_range");


	sum = get_sum(numbers, N);


	cout << "The sum of the first " << N << " numbers ( ";

	for (int j = 0; j < N; ++j){ // listázza az első N számot

		cout << numbers[j] << " ";
	}

	cout << ") is " << sum << ".\n";


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