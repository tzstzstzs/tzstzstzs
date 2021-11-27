#include "std_lib_facilities.h"

double rt(double a, double b, double c){

	double r = sqrt((b * b) - (4 * a * c));

	if ((b * b) - (4 * a * c) < 0) error("No real root.");

	return r;

}



int main()
{
	double a, b, c, x1, x2;

	cout << "Enter a, b, and c: ";

	cin >> a >> b >> c;

	x1 = (-b + (rt(a, b, c))) / (2 * a);

	x2 = (-b - (rt(a, b, c))) / (2 * a);

	cout << "x1 == " << x1 << '\n' << "x2 == " << x2 << "\n\n";

	cout << a * x1 * x1 + b * x1 + c << '\n';

	cout << a * x2 * x2 + b * x2 + c << '\n';


	return 0;
}