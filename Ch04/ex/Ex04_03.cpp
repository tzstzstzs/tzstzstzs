#include "std_lib_facilities.h"

int main(){

    vector<double> distance;
    double temp = 0;
    double sum = 0;

    cout << "Enter a distance: ";

    while(cin >> temp){
        distance.push_back(temp);
        sum += temp;
        cout << "Enter a distance: ";
    }

    sort(distance);

    cout << "\nThe smallest distance is: " << distance[0] << '\n';
    cout << "The largest distance is: " << distance[distance.size()-1] << '\n';
    cout << "The mean distance is: " << sum / distance.size() << '\n';

    return 0;
}
