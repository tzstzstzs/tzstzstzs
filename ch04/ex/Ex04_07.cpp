#include "std_lib_facilities.h"

int main(){
    string x, y;
    char op;
    vector <string> number = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    cout << "Enter two numbers between 0 and 9 (digit or spelled out) and an operator (+ - * /) (3 times x to escape): ";

    double a, b, c;

    while (cin >> x >> y >> op && x != "x" || y != "x" || op != 'x'){

        for (int i = 0; i < number.size(); ++i){
            if (x == number[i] && i < 10) a = i;
            else if (y == number[i] && i < 10) b = i;
            else if (x == number[i]) a = i - 10;
            else if (y == number[i]) b = i - 10;

        }

        switch(op){
            case '+':
                c = a + b;
                cout << "\nThe sum of " << a << " and " << b << " is " << c << ".\n";
                break;

            case '-':
                c = a - b;
                cout << "\nThe subtraction of " << a << " and " << b << " is " << c << ".\n";
                break;

            case '*':
                c = a * b;
                cout << "\nThe multiple of " << a << " and " << b << " is " << c << ".\n";
                break;

            case '/':
                c = a / b;
                cout << "\nThe quotient of " << a << " and " << b << " is " << c << ".\n";
                break;

            default:
                cout << "Invalid operator\n";
                break;
        }

        cout << "Enter two numbers between 0 and 9 (digit or spelled out) and an operator (+ - * /): ";

    }

    return 0;
}
