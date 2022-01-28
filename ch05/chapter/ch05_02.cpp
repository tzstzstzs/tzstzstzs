#include "../../../std_lib_facilities.h"

int area(int lenght, int width){
	if (lenght <= 0 || width <= 0) error("non-positive area() argument");

	return lenght * width;
}

int framed_area(int x, int y){
	constexpr int frame_width = 2;
	return area(x - frame_width, y - frame_width);
}


int main()
{
	int x = 4, y = 6, z = 8;

	int area1 = area(x,y);
	int area2 = framed_area(3,z);
	int area3 = framed_area(y,z);
	double ratio = double(area1) / area3;

	cout << "area1 = " << area1 << endl;
	cout << "area2 = " << area2 << endl;
	cout << "area3 = " << area3 << endl;
	cout << "ratio = " << ratio << endl;

	return 0;
}