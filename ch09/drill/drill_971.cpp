#include "../std_lib_facilities.h"

enum class Month {
	jan, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec
};

vector<string> months = 
{
	"January",
	"February",
	"March",
	"April",
	"May",
	"June",
	"July",
	"August",
	"September",
	"October",
	"November",
	"December"
};

ostream& operator<<(ostream& os, Month m)
{
    return os << months[int(m)];
}

class Date {
    int y;
    Month m;
    int d;
public:
    Date(int y, Month m, int d);
    void add_day(int n);
    int year() const { return y; }
    Month month() const { return m; }
    int day() const { return d; }
};

Date::Date(int y, Month m, int d)
    :y{y}, m{m}, d{d}
{
    if (d < 1 || 31 < d) error("invalid day");
}

void Date::add_day(int n)
{
    d += n;
    if (d > 31) d %= 31;
}

ostream& operator<<(ostream& os, const Date& d)
{
    return os << d.year() << ". " << d.month()
              << ". " << d.day() << '.';
}

int main()
try {
    Date today(1978, Month::jun, 25);
    Date tomorrow = today;
    tomorrow.add_day(1);

    cout << today << '\n'
         << tomorrow << '\n';

    Date bad_day(2004, Month::jan, -5);
} catch (exception& e) {
	cout << e.what() << endl;
	return 1;
}