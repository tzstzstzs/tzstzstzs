#include "std_lib_facilities.h"

int main()
{
	int smallest = 0, largest = 0;
	string temp;
	vector <string> words;

	/*cout << "Enter a word: ";

	cin >> temp;

	words.push_back(temp);

	cout << "The word is: " << temp;

	largest = temp.size();
	smallest = temp.size();*/

	cout << "\nEnter a word: ";

	while (temp != "|"){
		
		cin >> temp;

		words.push_back(temp);
		if(temp != "|"){

			if(temp.size() > largest){
				largest = temp.size();
				cout << "The word is: " << temp << " The largest so far.";
					if(words.size() == 1)
						smallest = temp.size();
			}
			else if(temp.size() < smallest){
				smallest = temp.size();
				cout << "The word is: " << temp << " The smallest so far.";
				if(words.size() == 1)
						largest == smallest;
			}

			cout << "\nEnter a word: ";
		}
	}

	int count = 0, mean_nr = 0;
	string mean;

	for(int i = 0; i < words.size(); i++){

		count++;

		for(int j = i; j < words.size(); j++){

			if(words[i] == words[j] && i != j){

				count++;

				if(count > mean_nr){
					mean_nr = count;
					mean = words[i];
				}
			}
		}
	}

	cout << "\nThe mean word is: " << mean << endl;

	return 0;
}