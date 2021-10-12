#include "std_lib_facilities.h"

int main()
{
	int i = 97;
	char abc = 'a';

	while (i <= 122){
		abc = i;
		cout << abc << "\t" << i << "\n";
		i++;
	}

	return 0;
}