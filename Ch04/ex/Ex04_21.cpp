#include "std_lib_facilities.h

int main(){

    vector <string> names;
    vector <int> scores;

    cout << "Enter a name and score: "

    string name;
    int score;

    while(names[names.size()-1] == "0"){
        cin >> names >> scores;

        names.push_back(name);
        scores.push_back(score);
    }

    for(i = 0; i < names.size(); ++i){
        for(j = 0; j < names.size(); ++j){
            if(names[j] == names[i] && j != i){
                cout << "Error";
                return 0;
            }
        }
    }

    cout << "\n\nThe entered names and scores:\n";

    for(i = 0; i < names.size(); ++i){
        cout << names[i] << "\t" << scores [i] << "\n\n";
    }

    cout << "Enter a score to get the names: ";

    int name_count = 0;

    while(cin >> score){

        for(i = 0; i < scores.size(); ++i){
            if(score == scores[i]){
                cout << "Name: " << names[i] << "\n";
                name_count++;
            }
            else if(name_count == 0)
                cout << "Name not found.\n\n";
        }
    }

    return 0;
}

