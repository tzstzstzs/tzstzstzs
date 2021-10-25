#include "std_lib_facilities.h"

int main()
{
	//cout << "Please enter two integers:\n";

	double temp1, temp2;

	while (cin >> temp1 >> temp2){

		if(temp1 < temp2){
			cout << "The samller value is: " << temp1 << ", and the larger value is: " << temp2;
			if(temp2 - temp1 < 0.01)
				cout << "The numbers are almost equal.";
		}

		else if(temp1 > temp2){
			cout << "The samller value is: " << temp2 << ", and the larger value is: " << temp1;
			if(temp1 - temp2 < 0.01)
				cout << "\nThe numbers are almost equal.";
		}

		else
			cout << "The numbers are equal.";

		//if(temp1 == "|" || temp2 == "|") break;
	}

	return 0;
}