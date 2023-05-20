// Rock-paper-scissors game

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

string get_computer_pick() {

    int number;
    string computer_pick;
 
    // use of srand()
    srand(time(NULL));
    number = (rand() % 3) + 1;          // generate random number between 0 & 2 and add 1
    

    switch(number) {             // switch statement assigns random number from 1 to 3 to 'r', 'p' or 's'

        case 1:
            computer_pick = "rock";
            break;
        case 2:
            computer_pick = "paper";
            break;
        case 3:
            computer_pick = "scissors";
            break;
    }
    return computer_pick;           //returns computers pick
}

string get_user_pick() {
    string user_pick;

    cout << "Welcome to Rock, Paper, Scissors" << endl << "Enter Rock, Paper or Scissors:" << endl;

    while (true) {
        getline(cin, user_pick);  // Input a line of text from the user
        for (char& c : user_pick) {           // --------------------------------------//// Loop variable a reference (char&) to each character in string,
            c = tolower(c);  // Convert character to lowercase                           // instead of copy (char).                             
        }                                                                                 // allows the loop to modify original characters in string,
        if (user_pick == "rock" || user_pick == "paper" || user_pick == "scissors") {      // rather than copies.
            break;
        }
        cout << "Invalid input. Please enter Rock, Paper, or Scissors." << endl;
    }

    return user_pick;
}


string get_result(string computer_pick, string user_pick) {

    if (computer_pick == user_pick) {
        return "Draw! Close! Lets play again.";
    }

    // condition for user to win
    else if (user_pick == "paper" && computer_pick == "rock") {
        return "Damn! You win! I doubt you beat me again though.";
    }
    else if (user_pick == "rock" && computer_pick == "scissors") {
        return "Damn! You win! I doubt you beat me again though.";
    }
    else if (user_pick == "scissors" && computer_pick == "paper") {
        return "Damn! You win! I doubt you beat me again though.";
    }
 
    // all other conditions result in user losing
    else {
        return "Computer wins! You suck!";
    }
}


int main() {
 
    string computer_pick = get_computer_pick();
    string user_pick = get_user_pick();       // calls function
    string result = get_result(computer_pick, user_pick);

    cout << "Computer's pick: " << computer_pick << endl;
    cout << "Your pick: " << user_pick << endl;

    cout << result << endl;
  
 
    return 0;
}

/*
rand() generates number ranging 0 to 32767