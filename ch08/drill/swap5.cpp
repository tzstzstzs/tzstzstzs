#include "../std_lib_facilities.h"

void swap_v(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
}

void swap_r(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

/*void swap_cr(const int& a, const int b)
{
	int temp = a;
	a = b;
	b = temp;
}*/

int main()
{
	double dx = 7.7;
	double dy = 9.9;
	cout << "dx=" << dx << "dy=" << dy << endl;

	swap_v(dx, dy); //ha r-t hívom, nem cseréli. double vs int
	cout << "dx=" << dx << " dy=" << dy << endl;

	return 0;
}