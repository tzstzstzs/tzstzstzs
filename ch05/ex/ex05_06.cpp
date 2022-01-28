#include "../../../std_lib_facilities.h"

class out_of_limit{};

double ctok(double temperature)
{
	if (temperature < -273.15) throw out_of_limit{};

	double kel = temperature + 273.15;
	
	return kel;
}


double ktoc(double temperature)
{
	if (temperature < 0) throw out_of_limit{};

	double cel = temperature - 273.15;
	
	return cel;
}


double ctof(double temperature)
{
	if (temperature < -273.15) throw out_of_limit{};

	double far = 9.0 / 5.0 * (temperature + 32.0);
	
	return far;
}


double ftoc(double temperature)
{
	if (temperature < -169.527778) throw out_of_limit{};

	double cel = 5.0 / 9.0 * (temperature - 32.0);
	
	return cel;
}


int main()
try{
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
catch (out_of_limit){
	cerr << ("too low value") << endl;
	keep_window_open();
	return 1;
}