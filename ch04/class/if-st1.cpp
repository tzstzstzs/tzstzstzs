#include "std_lib_facilities.h"

int main()
{
	int a = 0, b = 0;

	cout << "Please enter two integer values: ";
	cin >> a >> b;

	if (a>b)
		cout << "Max (" << a << ", " << b << ") is " << a << ".\n\n";

	else
		cout << "Max (" << a << ", " << b << ") is " << b << ".\n\n";

	return 0;
}