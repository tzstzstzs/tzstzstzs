#include "std_lib_facilities.h"

int main()
{
	constexpr double yen_per_dollar = 0.0089;
	constexpr double euro_per_dollar = 1.16;
	constexpr double pound_per_dollar = 1.36;
	constexpr double yuan_per_dollar = 0.16;
	constexpr double kroner_per_dollar = 0.12;

	double amount = -1;
	char currency = 0;

	cout << "Please enter an amount and a currency (yen (y), euro (e), pound (p), yuan (c) or kroner (k))!\n";
	cin >> amount >> currency;

	switch (currency){
		case 'y': {
			cout << amount << "yen==" << amount * yen_per_dollar << "dollar\n";
			break;
		}
		case 'e': {
			cout << amount << "euro==" << amount * euro_per_dollar << "dollar\n";
			break;
		}
		case 'p': {
			cout << amount << "pound==" << amount * pound_per_dollar << "dollar\n";
			break;
		}
		case 'c': {
			cout << amount << "yuan==" << amount * yuan_per_dollar << "dollar\n";
			break;
		}
		case 'k': {
			cout << amount << "kroner==" << amount * kroner_per_dollar << "dollar\n";
			break;
		}
		default:
			cout << "Error, unit is not recognized.\n\n";
	}

	return 0;
}