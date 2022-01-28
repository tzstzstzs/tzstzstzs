#include "../../../std_lib_facilities.h"

class out_of_limit{};

double ctok(double c)
{
	if (c < -273.15) throw out_of_limit{};
	
	double k = c + 273.15;
	
	return k;
}

int main()
try{
	double c = 0;

	cin >> c;

	double k = ctok(c);

	cout << k << '\n';

	return 0;
}
catch(out_of_limit){
	cerr << "Too low value" << endl;
	keep_window_open();
	return 1;
}