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


double ctof(double temperature)
{
	if (temperature < -273.15) error("Non valid value.");

	double far = 9.0 / 5.0 * (temperature + 32.0);
	
	return far;
}


double ftoc(double temperature)
{
	if (temperature < -169.527778) error("Non valid value.");

	double cel = 5.0 / 9.0 * (temperature - 32.0);
	
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
		double far = ctof(temperature);
		cout << kel << " Kelvin\n";
		cout << far << " Fahrenheit\n";
	}

	else if (unit == 'k'){
		double cel = ktoc(temperature);
		cout << cel << " Celsius\n";
	}

	else if (unit == 'f'){
		double cel = ftoc(temperature);
		cout << cel << " Celsius\n";
	}

	return 0;
}