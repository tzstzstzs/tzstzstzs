#include "../std_lib_facilities.h"

class Date {
    int y, m, d;
public:
    Date(int y, int m, int d);      // check for valid date and initialize
    void add_day(int n);            // increase the Date by n days
    int month() const { return m; }
    int day() const { return d; }
    int year() const { return y; }
};

Date::Date(int year, int month, int day)
    :y{year}, m{month}, d{day}
{
    if (m < 1 || 12 < m) error("invalid month");
    if (d < 1 || 31 < d) error("impossible day");
}

void Date::add_day(int n)
{
    d += n;
	if (d > 31)
	{
		++m;
		d -= 31;
		if (m == 12)
		{
			++y;
		}
	}
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << d.year() << ". " << d.month() << ". " << d.day() << '.';
}

int main()
try {
    Date today(1978, 6, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);

    cout << "Today: " << today << '\n' << "Tomorrow: " << tomorrow << '\n';

    Date bad_day(2004, 13, -5);

} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}