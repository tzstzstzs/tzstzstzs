#include "std_lib_facilities.h"

int main()
{
	vector <string> disliked = {"Broccoli", "Cucumber", "Mirror"};
	vector <string> words;

	cout << "Please enter some words:\n";

	for(string temp; cin >> temp;){

		words.push_back(temp);

		if(temp == "Q") break;
	}

	cout << "\n\nThe words you entered:\n";
	
	for(int i = 0; i < words.size()-1; ++i){
		if(words[i] != disliked[0] && words[i] != disliked[1] && words[i] != disliked[2])
			cout << words[i] << '\n';
		else
			cout << "BLEEP\n";
	}

	cout << "\n\n";

	return 0;
}