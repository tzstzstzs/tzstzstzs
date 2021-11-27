#include "std_lib_facilities.h"

int error_ID_number = 0;

int area(int lenght, int width)
{
	if (lenght <= 0)
	{
		error_ID_number = 2;
	}
	if (width <= 0)
	{
		error_ID_number = 3;
	}

	return lenght * width;
}

int framed_area(int x, int y)
{
	return area(x-2, y-2);
}

int main()
{
	int x = -2;
	int y = 4;

	int area1 = area(x, y);
	if (error_ID_number == 2) error("Non-positive lenght");
	if (error_ID_number == 3) error("Non-positive widht");

	cout << "area1: " << area1 << endl;

	int area2 = area(3, 6);
	cout << "area1: " << area2 << endl;

	int framed_area1 = framed_area(3, 7);
	cout << "framed_area1: " << framed_area1 << endl;

	double ratio = double(area1) / framed_area1;
	cout << "ratio: " << ratio << endl;

}