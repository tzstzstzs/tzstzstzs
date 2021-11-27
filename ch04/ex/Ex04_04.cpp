#include "std_lib_facilities.h"

int main(){

    char answer;
    int guess = 50, temp = 0;


    cout << "Guess a number between 1 and 100. The computer will guess. Please answer: yes (y), smaller (s) or larger (l)\n\n";

    temp = guess;

    for(int i = 1; i < 7; ++i){
        cout << "\nIs the number you are thinking of: " << guess << "?\n\nIs it larger or smaller? (yes = y, smaller = s, larger = l)\n";
        cin >> answer;

        if (answer == 'y'){
            cout << "\nThank you!\n";
            break;
        }

        else if (answer == 's'){

            if (temp >= 2){

                temp = temp / 2;
                guess = guess - temp;
            }

            else if (temp < 2){

                temp = 1;
                guess = guess - temp;
                cout << "\nThe number is: " << guess << "\nThank you!\n\n\n";
                break;
            }
        }

        else if (answer == 'l'){
            
            if (temp >= 2){

                temp = temp / 2;
                guess = guess + temp;
            }

            else if (temp < 2){

                temp = 1;
                guess = guess + temp;
                cout << "\nThe number is: " << guess << "\nThank you!\n\n\n";
            }
        }

        else{
            cout << "\nError. Please press n or y.\n";
            i--;
        }
    }

    return 0;
}
