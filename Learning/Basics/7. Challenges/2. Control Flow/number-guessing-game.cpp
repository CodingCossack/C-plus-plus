// Program to check if a number guessed by the user is correct or not.

#include <iostream>
using namespace std;

int main() {

    int correctNumber = 18;										// create a variable named correctNumber

    int guessedNumber;											// get input for guessedNumber variable
    cin >> guessedNumber;

    if (guessedNumber < 100 && guessedNumber > 18) {			// use if-else statement to check if the guess is correct or not
        cout << "Wrong, your guess is larger";
    }
    else if (guessedNumber > 0 && guessedNumber < 18) {
        cout << "Wrong, your guess is smaller";
    }
    else if (guessedNumber == correctNumber) {
        cout << "Your guess is correct";
    }

    return 0; 
}