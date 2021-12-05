#include <iostream>

//using namespace std; // ezt azért nem kellett hasznaálni, mert benne van a kurzus header-ben

//using std::string; // az std string-re gondolok

int main()
{
	double number = 0;
	std::string message = "Üzenet\n";

	std::cout << message;

	std::cin >> number;

	std::cout << number << std::endl;

	return 0;
}