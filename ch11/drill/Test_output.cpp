#include "../std_lib_facilities.h"

int main()
{
	int birth_year = 1985;

	cout << birth_year << "\t(Decimal)\n"
		<< hex << birth_year << "\t(Hexadecimal)\n"
		<< oct << birth_year << "\t(Octal)\n\n";

	cout << showbase << dec;

	cout << birth_year << "\t(Decimal)\n"
		<< hex << birth_year << "\t(Hexadecimal)\n"
		<< oct << birth_year << "\t(Octal)\n\n";

	cout << dec;

	int a, b, c, d;
	cin >> a >> hex >> b >> oct >> c >> d; // a b-t hexadecimális számrendszerben olvasSa be: (16^3)+(2*16^2)+(3*16)+4...
	cout << a << '\t' << b << '\t' << c << '\t' << d << '\n';

	return 0;
}