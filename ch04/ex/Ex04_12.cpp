#include "std_lib_facilities.h"

int main(){

    vector <int> primes;
    bool prime_check;
    double i = 0, j = 0, k = 0;
    int max = 0;

    cout << "Enter the max number you want to check if it is prime: ";

    cin >> max;

    cout << "Prime numbers between 1 and " << max << ":\n";

    for (i = 1; i <= max; ++i){

        prime_check = true;

        for (j = 1; j <= i; ++j){
            k = i / j; // ez csak a prím számok esetében nem nulla.
            int k2 = (int)i / (int)j; // ez mindig egész szám lesz.

            if (k - k2 == 0 && j != 1 && j != i){
                prime_check = false;
                break;
            }
        }

        if (prime_check == true){
            i = (int)i;
            primes.push_back(i);
            cout << i << "\n";
        }
    }

    return 0;
}
