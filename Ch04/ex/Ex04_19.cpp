#include "std_lib_facilities.h"

int main(){

    vector <string> names;
    vector <int> scores;

    cout << "Enter a name and score: ";

    string name;
    int score;

    while(name == '0'){
        cin >> name >> scores;

        names.push_back(name);
        scores.push_back(score);
    }

    for(int i = 0; i < names.size(); ++i){
        for(int j = 0; j < names.size(); ++j){
            if(names[j] == names[i] && j != i){
                cout << "Error";
                return 0;
            }
        }
    }

    cout << "\n\nThe entered names and scores:\n";

    for(i = 0; i < names.size(); ++i){
        cout << names[i] << "\t" << scores [i] << "\n";
    }

    return 0;
}

