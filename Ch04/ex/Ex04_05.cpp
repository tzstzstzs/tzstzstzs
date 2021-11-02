#include "std_lib_facilities.h"

int main(){
    double a = 0, b = 0, c = 0;
    char op;

    cout << "\nEnter two doubles and an operator (+ - * /): ";

    while (cin >> a >> b >> op){
        //cout << "\nEnter two doubles and an operator (+ - * /): ";
        //cin >> a >> b >> op;

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
                break;
        }

        cout << "\nEnter two doubles and an operator (+ - * /): ";

    }

    return 0;
}
