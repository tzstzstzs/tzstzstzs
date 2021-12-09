#include "../std_lib_facilities.h"

//Task 4.
ostream& print_array10(ostream& os, int* a)
{
	for (int i = 0; i < 10; ++i)
		os << a[i] << "\t";
	os << endl;

	return os;
}

// Task 7
ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "\t";
	os << endl;

	return os;
}

//Task 10.
ostream& print_vector(ostream& os, vector<int> a){
	for(int x : a)
		os << x << "\t";
	os << endl;

	return os;
}


int main()
{	
	//Task 1.
	int* zs = new int[10];

	//Task 2.
	for (int i = 0; i < 10; ++i)
		cout << zs[i] << "\t";
	cout << endl;

	cout << "Print with print_array10: \n";

	print_array10(cout, zs);

	//Task 3.
	delete[] zs;
 
 	//Task 5.
	int* zs1 = new int[10];

	int x = 100;

	for (int i = 0; i < 10; ++i) {
		zs1[i] = x;
		++x;
	}

	cout << "Elements of array that zs1 is pointing to: \n";

	print_array10(cout, zs1);

	delete zs1;

	//Task 6.
	int* zs2 = new int[11];

	x = 100;

	for (int i = 0; i < 11; ++i) {
		zs2[i] = x;
		++x;
	}

	cout << "Elements of array that zs2 is pointing to: \n";

	for (int i = 0; i < 11; ++i) 
		cout << zs2[i] << "\t";
	cout << endl;

	delete zs2;

	//Task 8.
	int n = 20;
	int* zs3 = new int[n];

	x = 100;

	for (int i = 0; i < n; ++i) {
		zs3[i] = x;
		++x;
	}
	
	cout << "Elements of array that zs3 is pointing to: \n";
	print_array(cout, zs3, n);

	delete zs3;


	//Task 10.

	//n = 10;
	//n = 11;
	n = 20;
	vector<int> zs4(n);

	for(int i = 0; i < n; ++i)
		zs4[i] = 100 + i;

	cout << "Elements of vector zs4: \n";
	print_vector(cout, zs4);




	return 0;
}