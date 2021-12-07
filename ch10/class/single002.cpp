#include "../std_lib_facilities.h"

int main()
try {
	cout << "Please enter an integer in the range 1 to 10: ";
	int n = 0;

	while(true)
	{
		cin >> n;
		if (cin)
		{
			if (n >= 1 && n <= 10) break;
			cout << "Sorry " << n << " is not in [1:10]!\n";
		}
		else if (cin.fail()) // a megadott dolgot nem lehet integerré formázni
		{	
			cin.clear();
			cout << "Sorry, that was not an integer!\n";
			for (char ch; cin >> ch && !isdigit(ch); )
			;
			//karakterenként bolvassuk input streamet addig, amíg számhoz nem érünk és a ch-ban tároljuk / kiüríti az input streamet

			if (!cin) error ("no input");

			cin.unget(); // ha a karakter szám, tegyük vissza az input stream-be
		}
		else
		{
			error ("no input");
		}
	}

	cout << "Thanks: " << n << endl;

	return 0;

} catch (runtime_error& e){
	cerr << "Error: " << e.what() << endl;
	return 1;
} catch (...) {
	cerr << "Some error\n";
	return 2;
}