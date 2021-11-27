#include "std_lib_facilities.h"

int main()
{
	constexpr double yen_per_dollar = 0.0089;
	constexpr double euro_per_dollar = 1.16;
	constexpr double pound_per_dollar = 1.36;
	
	double amount = -1;
	char currency = 0;

	cout << "Please enter an amount and a currency (y or e or p)!\n";
	cin >> amount >> currency;

	if (currency == 'y')
		cout << amount << "yen==" << amount * yen_per_dollar << "dollar\n";
	else if (currency == 'e')
		cout << amount << "euro==" << amount * euro_per_dollar << "dollar\n";
	else if (currency == 'p')
		cout << amount << "pound==" << amount * pound_per_dollar << "dollar\n";
	else
		cout << "Error, unit is not recognized.\n\n";
	

	return 0;
}