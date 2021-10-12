#include "std_lib_facilities.h"

int main()
{
	int i = 1;
	char abc = 'a';

	for (i=97;i<=122;++i){
		abc = i;
		cout << abc << "\t" << i << "\n";
	}

	for (i=65;i<=90;++i){
		abc = i;
		cout << abc << "\t" << i << "\n";
	}

	return 0;
}