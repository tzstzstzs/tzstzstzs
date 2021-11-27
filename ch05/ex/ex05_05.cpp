#include "std_lib_facilities.h"

double ctok(double temperature)
{
	if (temperature < -273.15) error("Non valid value.");

	double kel = temperature + 273.15;
	
	return kel;
}

double ktoc(double temperature)
{
	if (temperature < 0) error("Non valid value.");

	double cel = temperature - 273.15;
	
	return cel;
}

int main()
{
	cout << "Enter temperature and unit: ";

	double temperature = 0;

	char unit;

	cin >> temperature >> unit;


	if (unit == 'c'){
		double kel = ctok(temperature);
		cout << kel << " Kelvin\n";
	}

	else if (unit == 'k'){
		double cel = ktoc(temperature);
		cout << cel << " Celsius\n";
	}

	return 0;
}