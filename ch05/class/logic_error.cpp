#include "std_lib_facilities.h"

int main()
{
	
	double min = numeric_limits<double>::lowest();
	double max = numeric_limits<double>::max();
	double sum = 0;



	vector<double> temps;
	for (double temp; cin >> temp; )
		temps.push_back(temp);

	for(auto temp : temps)
	{
		if (temp > min) min = temp;
		if (temp < max) max = temp;
		sum += temp;
		//cout << temp << endl;
	}

	cout << "High temperature: " << max << endl;
	cout << "Low tempreture: " << min << endl;
	cout << "Avg temperture: " << sum / temps.size() << endl;

	return 0;
}

    © 2021 GitHub, Inc.

    Terms
    Privacy
    Security
    Status
    Docs
    Contact GitHub
    Pricing
    API
    Training
    Blog
    About

