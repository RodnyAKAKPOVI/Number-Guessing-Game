//
// Created by Utilisateur on 07/01/2026.
//
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    cout << "********************* NUMBER GUESSING GAME ********************* \n\n"
         << "Welcome to the number guessing game.\n\n"
         << "The rules are quite simple: you will have to guess a number randomly generated between 1 and an upper limit. Good luck!\n" << endl;

    int highestOption, tries, guess;
    cout << "What's your highest option ? \t";
    cin >> highestOption;
    cout << "How many tries do you think you will need ? \t";
    cin >> tries;

    srand(time(NULL));
    int bingo = rand() % highestOption + 1;

    int score = 0;
    cout << "Guess a number between 1 and " << highestOption << ".\t" ;

    while (tries > 0) {
        cin >> guess;

        if (guess > highestOption || guess < 1) {
            cout << "Number out of range (1-" << highestOption << "); try again. \t";
            continue;
        }

        score++;
        tries--;

        if (guess > bingo) {
            cout << "Too high, try again. \t";
        }
        else if (guess < bingo) {
            cout << "Too low, try again. \t";
        }
        else {
            cout << "Bingo! Great job!\n";
            break;
        }

    }

    if (tries == 0) {
        cout << "What a shame! You ran out of trials. The correct number was: " << bingo << ". Good luck next time!\n";
    }

    cout << "Number of trials:\t " << score << "\n"
         << "***********************************************" << endl;

    return 0;
}