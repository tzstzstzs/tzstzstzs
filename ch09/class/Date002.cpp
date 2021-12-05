#include "../std_lib_facilities.h"

struct Date {
	int year, month, day;

	Date(int y, int m, int d); //konstruktor tag (ugyanaz a neve, mint struktúrának)
	void add_day(int n);
};

Date::Date(int y, int m, int d)
{
	if (y > 0)
		year = y; //mostmár a belső tagokra vagyunk kiváncsiak (struct Date)
	else
		error("Invalid year");
	if (m > 0 && m <= 12)
		month = m;
	else
		error("Invalid month");
	if (d > 0 && d <= 31)
		day = d;
	else
		error("Invalid day");
}

void Date::add_day(int n) // ezt is ugyanúgy módosítjuk
{
	day += n;
	if (day > 31)
	{
		month++;
		day -= 31;
		if (month > 12)
		{
			year++;
			month -= 12;
		}
	}
}

int main()
try {
	Date today {2021, 8, 31};

	//today.add_day(1);

	today.day++;

	cout << "Date: " << today.year << '.' << today.month << '.' << today.day << ".\n";


	return 0;
} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}