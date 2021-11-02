#include "std_lib_facilities.h"

int main(){

    double a, b, c, x1, x2;

    cout << "Please enter a, b, and c of the quadratic equasion: ";

    cin >> a >> b >> c;

    x1 = (-b + (sqrt((b * b) - 4 * a * c))) / (2 * a);

    x2 = (-b - (sqrt((b * b) - 4 * a * c))) / (2 * a);

    cout << "x1 = " << x1 << "\n";

    cout << "x2 = " << x2 << "\n\n";

    return 0;
}

