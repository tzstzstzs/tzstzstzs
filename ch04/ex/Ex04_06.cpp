#include "std_lib_facilities.h"

int main(){
    vector <string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    int temp = 0;

    cout << "Please enter a one digit number: ";

    while (cin >> temp){
        cout << number[temp] << "\n\nPlease enter a one digit number: ";
    }

    return 0;
}
