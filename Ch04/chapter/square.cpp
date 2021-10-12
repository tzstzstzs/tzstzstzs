#include "std_lib_facilities.h"

int squar(int x)
	{
		int i = 0, y = 0;

		for (i=1;i<=x;++i){
			y += x;
		}

		return y;
	}

int main()
	{
	int a = 1;

	cout << "Enter an integer: ";
	cin >> a;

	cout << "Square of " << a << " is " << squar(a) << "\n\n";

	return 0;
	}