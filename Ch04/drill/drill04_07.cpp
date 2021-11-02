#include "std_lib_facilities.h"

constexpr double cm_per_m = 100;
constexpr double cm_per_inch = 2.54;
constexpr double in_per_ft = 12;


double convert_to_meter(double dis, string uni){

	if (uni == "cm")
		dis = dis / cm_per_m;

	else if (uni == "in")
		dis = dis * cm_per_inch / cm_per_m;

	else if (uni == "ft")
		dis = dis * in_per_ft * cm_per_inch / cm_per_m;

	return dis;
}



int main()
{
	cout << "Please enter a distance (double) and a unit (cm, m, in, ft): ";

	double smallest = 0, largest = 0, temp = 0;
	string unit;
	double sum = 0;
	int nr_of_values = 0;
	vector<double> entered;

	while (cin >> temp >> unit){


		if (unit == "cm" || unit == "m" || unit == "in" || unit == "ft"){
			
			temp = convert_to_meter(temp, unit);
			entered.push_back(temp);

			if(temp > largest){
				largest = temp;
				cout << "The distance is: " << temp << "m. " << " The largest so far.\n\n";
				sum += temp;
				nr_of_values++;
					if (nr_of_values == 1)
						smallest = largest; // ennek a segítségével adjuk az első értéket a smallestnek.
			}

			else if(temp < smallest){
				smallest = temp;
				cout << "The distance is: " << temp << "m. " << " The smallest so far.\n\n";
				sum += temp;
				nr_of_values++;
			}

			else{
				cout << "The distance is: " << smallest << "m.\n\n";
				sum += temp;
				nr_of_values++;
			}

		}

		else
			cout << "Error, illegal unit.\n\n";

		cout << "Please enter a distance (double) and a unit (cm, m, in, ft): ";
	}

	cout << "\n\n Distances entered:\n";

	sort(entered);

	for(int i =0; i < entered.size(); ++i)
		cout << entered[i] << '\n';

	cout << "\nThe smallest distance is: " << smallest << "m.\n";
	cout << "The largest distance is: " << largest << "m.\n";
	cout << "The number of the values: " << nr_of_values << "\n";
	cout << "The sum of the values: " << sum << " meters." << "\n\n";

	return 0;
}