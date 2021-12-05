#include "std_lib_facilities.h"

int main()
{
	int i = 7;
	cout << "i: " << i << endl;

	int& r = i;
	cout << "r: " << r << endl;

	r = 9;

	cout << "r = 9\n";
	cout << "i: " << i << endl;
	cout << "r: " << r << endl;

	const int& cr = i;
	//cr = 100;
	//cout << "cr = 100\n";
	cout << "i: " << i << endl;
	cout << "r: " << r << endl;
	cout << "cr: " << cr << endl;

	i = 100;

	cout << "i = 100\n";
	cout << "i: " << i << endl;
	cout << "r: " << r << endl;
	cout << "cr: " << cr << endl;


	return 0;
}