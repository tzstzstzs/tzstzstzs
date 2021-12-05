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
	const int cx = 7;
	const int cy = 9;
	cout << "cx=" << cx << " cy=" << cy << endl;

	swap_v(7.7, 9.9);
	cout << "cx=" << cx << " cy=" << cy << endl;

	return 0;
}