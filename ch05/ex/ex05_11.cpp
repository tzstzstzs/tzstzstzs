#include "../../../std_lib_facilities.h"
 
int main ()
{
	int n;
	cout << "Enter the number of values of Fib series: ";
	cin >> n;

	vector<int> fib;
	//fib[0] = 1;
	//fib[1] = 1;

    for(int i = 2; i < n; ++i){
    	int temp;
    	if(i=0)
    		temp = 1;
    	else if (i=1)
    		temp = 1;
    	else
	    	temp = fib[i-1] + fib[i-2];
    	fib.push_back(temp);
    }

    for(int i = 0; i < fib.size(); ++i){
    	cout << fib[i] << ' ';
    }

    cout << "\n\n";

    return 0;
}