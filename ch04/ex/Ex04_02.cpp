#include "std_lib_facilities.h"

int main(){

    vector<double> temps;

    for (double temp; cin >> temp; ){
        temps.push_back(temp);
        sort(temps);
        cout << "Median: " << (temps[temps.size()/2]) << "\n";
    }

    return 0;
}
