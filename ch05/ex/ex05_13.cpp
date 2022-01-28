#include "../../../std_lib_facilities.h"


int main()
{
	bool new_game = true;

	while(new_game){
		int n = 0;

		cout << "Enter a number: ";
		cin >> n;

		srand(n);
		vector<int> game;

		for(int i = 0; i < 4; ++i){
			int temp;
			temp = randint(10);
			game.push_back(temp);
		}
		
		bool success = false;


		cout << "Guess four digit from 0 to 9: ";

		while(!success){
			vector<int> guess;
			int bull = 0, cow = 0;

			for(int i=0; i<game.size(); ++i){
				int temp;
				cin >> temp;
				if(! cin || temp < 0 || temp > 9) error("bad_value");
				guess.push_back(temp);
			}
		

			for(int i=0; i<guess.size(); ++i){
				for(int j=0; j<game.size(); ++j){
					if(guess[i] == game[j]){
						if(i == j) ++bull;
						else ++cow;
					}
				}
			}

			cout << bull << " bull" << endl;
			cout << cow << " cow" << endl;

			for(int i = 0; i < game.size(); ++i){ //kiírja a játék és tippelt számokat párokba rendezve
				cout << game[i] << '\t' << guess[i] << endl;
			}

			if(bull == game.size()) success = true;
		}

		cout << "Another game? (y or n)";
		char answer;
		cin >> answer;

		if(answer == 'n' || answer == 'N') new_game = false;
		else if(answer == 'y' || answer == 'Y') new_game = true;
		else error("Bad character");
	}

	return 0;
}