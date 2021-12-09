#include "../std_lib_facilities.h"

ostream& print_array(ostream& os, int* a, int n)
{
	for (int i = 0; i < n; ++i)
		os << a[i] << "\t";
	os << endl;

	return os;
}

ostream& print_vector(ostream& os, vector<int> a){
	for(int x : a)
		os << x << "\t";
	os << endl;

	return os;
}


int main()
{
	int tea = 7;
	int* p1 = &tea;

	cout << p1 << "\t" << tea << endl;


	int* p2 = new int[7];

	p2[0] = 1;

	for (int i = 1; i < 7; ++i){
		p2[i] = 2 * p2[i-1];
	}

	print_array(cout, p2, 7);

	int* p3 = p2;

	*p2 = *p1;
	*p2 = *p3;

	cout << "Pointer p1 points to: " << p1 << ". Its value is: " << *p1 << endl;
	cout << "Pointer p2 points to: " << p2 << ". Its value is: " << *p2 << endl;

	//delete p1;
	//delete p2;
	delete p3;

	int* r1 = new int[10];

	r1[0] = 1;

	for (int i = 1; i < 10; ++i)
		r1[i] = 2 * r1[i-1];

	int* r2 = new int[10];

	for (int i = 0; i < 10; ++i)
		r2[i] = r1[i];

	cout << "Elements of array r1:\n";
	print_array(cout, r1, 10);

	cout << "Elements of array p2:\n";
	print_array(cout, r2, 10);

	//Task 13.
	vector<int> q1(10);

	q1[0] = 1;

	for (int i = 1; i < 10; ++i)
		q1[i] = 2 * q1[i-1];

	vector<int> q2(10);

	for (int i = 0; i < 10; ++i)
		q2[i] = q1[i];

	cout << "Elements of vector q1:\n";
	print_vector(cout, q1);

	cout << "Elements of vector q2:\n";
	print_vector(cout, q2);

	
	return 0;
}