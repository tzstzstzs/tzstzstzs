#include "std_lib_facilities.h"

int main()
{
	constexpr double cm_per_inch = 2.54;
	
	double lenght = -1;
	char unit = 0;

	cout << "Please enter a lenght and a unit (c or i)!\n";
	cin >> lenght >> unit;

	if (unit == 'i')
		cout << lenght << "in==" << lenght * cm_per_inch << "cm\n";
	else
		cout << lenght << "cm==" << lenght / cm_per_inch << "inch\n";

	return 0;
}