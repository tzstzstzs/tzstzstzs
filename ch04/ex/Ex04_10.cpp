#include "std_lib_facilities.h"

int main(){

    vector <char> game = {'r', 'p', 's'};
    int i = 10;
    char answer;

    cout << "Rock, paper, scissors game. Enter your choice: ";

    while(answer != 'x'){

        cin >> answer;

        i = (i + 1) % 3;

        switch(game[i]){

            case 'r':

                switch(answer){

                    case 'r':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "Equal" << "\n";
                        break;

                    case 'p':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You won!" << "\n";
                        break;

                    case 's':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You lose!" << "\n";
                        break;

                    case 'x':
                        return 0;

                    default:
                        cout << "Error";
                        break;
                }
                break;

            case 'p':

                switch(answer){

                    case 'p':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "Equal" << "\n";
                        break;

                    case 's':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You won!" << "\n";
                        break;

                    case 'r':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You lose!" << "\n";
                        break;

                    case 'x':
                        return 0;

                    default:
                        cout << "Error";
                        break;
                }
                break;

            case 's':

                switch(answer){

                    case 's':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "Equal" << "\n";
                        break;

                    case 'r':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You won!" << "\n";
                        break;

                    case 'p':
                        cout << "Computer: " << game[i] << "\n";
                        cout << "You: " << answer << "\n";
                        cout << "You lose!" << "\n";
                        break;

                    case 'x':
                        return 0;

                    default:
                        cout << "Error";
                        break;
                }
                break;

        }

        cout << "\n\nEnter your choice: ";
        
    }

    return 0;
}