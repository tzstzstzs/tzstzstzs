#include "std_lib_facilities.h"

int main(){

    int n, num = 1, prime_count = 0;

    bool isPrime = false;

    cout << "The computer will find the first n prime number. Enter n number: ";

    cin >> n;

    cout << "The first " << n << " prime numbers:\n";



    for (prime_count = 1; prime_count <= n; num++){
        
        isPrime = false;
        
        
        for(int j = 2; j <= num/2; j++){

            if(num % j == 0){
                
                isPrime = true;
                
                break;
            }
        }

            if (isPrime == false && num != 1){

                prime_count++;
                
                cout << num << endl;
            
                
            }

        
    }

    

    return 0;
}