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

int main()
try{
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
catch(out_of_limit){
	cerr << "Too low value" << endl;
	keep_window_open();
	return 1;
}