#include "std_lib_facilities.h"

int main(){

    vector <string> names;
    vector <int> scores;

    cout << "Enter a name and score: ";

    string name;
    int score;

    while(cin >> name >> score){
        
        if(name == "NoName" && score == 0) break;

        else{

            names.push_back(name);
            scores.push_back(score);

            cout << "Enter a name and score: ";
        }
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

    for(int i = 0; i < names.size(); ++i){
        cout << names[i] << "\t" << scores [i] << "\n";
    }

    return 0;
}

