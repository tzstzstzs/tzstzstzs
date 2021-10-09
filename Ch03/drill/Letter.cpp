#include "std_lib_facilities.h"

int main()
{

	cout << "Enter the name of the person you want to write to: ";
	
	string first_name, second_name;	
	cin >> first_name >> second_name;

	cout << "Enter the name of another friend: ";

	string friend_name;
	cin >> friend_name;

	cout << "Enter m if your friend is male and enter f if your friend is female: ";

	char friend_sex = 64;
	cin >> friend_sex;

	cout << "Enter the age of the recipient: ";

	int age = 1;
	cin >> age;

	if (age <= 0 || age >= 110)
		simple_error("you're kidding!");



	cout << "\n\n\nDear" << first_name << ",\n\n"
		<< "     How are you? I am fine. I haven't seen you for a long time.\n" << "     I am writing to invite you to my birthday party for the next Saturday. It is going to be held in my house in the garden. Please arrive at 3 pm.\n" << "     Have you seen " << friend_name << " lately? ";

	if (friend_sex == 'm')
		cout << "If you see " << friend_name << " please ask him to call me.\n";

	else if (friend_sex == 'f')
		cout << "If you see " << friend_name << " please ask her to call me.\n";

	cout << "     I hear you just had a birthday and you are " << age << " years old. ";

	if (age < 12)
		cout << "Next year you will be " << age + 1 << ".";

	else if (age == 17)
		cout << "Next year you will be able to vote.";

	else if (age > 70)
		cout << "I hope you are enjoying retirement.";

	cout << "\n\nYours sincerely,\n\n\nTarr Zsolt\n\n";

	return 0;

}
