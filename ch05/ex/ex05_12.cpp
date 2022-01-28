#include "../../../std_lib_facilities.h"

int main()
{
	vector<int> game = { 1, 2, 3, 4 };

	cout << "Guess four digit from 0 to 9: ";

	vector<int> guess;

	for(int i=0; i<game.size(); ++i){
		int temp;
		cin >> temp;
		if(! cin || temp < 0 || temp > 9) error("bad_value");
		guess.push_back(temp);
	}

	int bull = 0, cow = 0;

	for(int i=0; i<game.size(); ++i){
		for(int j=0; j<=i; ++j){
			if(game[i] == guess[j]){
				if(i == j) ++bull;
				else ++cow;
			}
		}
	}

	cout << bull << " bull" << endl;
	cout << cow << " cow" << endl;

	return 0;
}