#include "std_lib_facilities.h"

int main(){

    vector <int> prime_check;
    int i = 0, j = 0;
    int max = 100;
    int c = 1;

    for(i = 0; i < max; ++i){
        prime_check.push_back(c);
    }

    for (i = 0; i * i < max; ++i){
        
        if(prime_check[i] == 1 && i > 1){
            for (j = i * i; j < max; j += i){
                prime_check[j] = 0;  
            }
        }
    }
    
    vector <int> primes;

    for(i = 2; i < max; ++i){
        if(prime_check[i] == 1)
            primes.push_back(i);
    }

    for(i = 0; i < primes.size(); ++i)
        cout << primes[i] << "\n";

    return 0;
}