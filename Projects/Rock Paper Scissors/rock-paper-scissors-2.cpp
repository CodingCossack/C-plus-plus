// Program to multiply N to each element of the array.

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
 
class Game {
    private:
        string user_pick;
        string computer_pick;
        string result;
 
    public:
    
        // function to return computer's pick
        string get_computer_pick() {
 
            // generate random number based on time
            srand(time(NULL));
 
            // random number between 1 and 3
            int random_number = (rand() % 3) + 1;
 
            switch(random_number) {
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
 
            return computer_pick;
        }
 
        // function to return user's pick
        string get_user_pick() {
 
            char user_input;
 
            // get input until user enters 'r', 'p', or 's'
            while (1) {
 
                cout << "Enter Your Choice (r for rock, p for paper, s for scissors): ";
                cin >> user_input;
 
                // convert user_pick to lowercase
                user_input = tolower(user_input);
 
                // assign appropriate string to user_pick
                if (user_input == 'r') {
                    user_pick = "rock";
 
                    // terminate while loop
                    break;
                }
                else if (user_input == 'p') {
                    user_pick = "paper";
 
                    // terminate while loop
                    break;
                }
                else if (user_input == 's') {
                    user_pick = "scissors";
 
                    // terminate while loop
                    break;
                }
            }
 
            return user_pick;
        }
 
        // return either "win", "lose" or "draw"
        string get_result() {
 
            // condition for user to draw
            if (user_pick == computer_pick) {
                result = "draw";
            }
 
            // condition for user to win
            else if (user_pick == "paper" && computer_pick == "rock") {
                result = "win";
            }
 
            else if (user_pick == "rock" && computer_pick == "scissors") {
                result = "win";
            }
 
            else if (user_pick == "scissors" && computer_pick == "paper") {
                result = "win";
            }
 
            // all other conditions result in loss
            else {
                result = "lose";
            }
            
            return result;
        }
};
 
int main() {

    while (1) {

        Game game;
        char play_again;

        string user_pick = game.get_user_pick();
        string computer_pick = game.get_computer_pick();
        string result = game.get_result();

        cout << "User Pick: " << user_pick << endl;
        cout << "Computer Pick: " << computer_pick << endl;
        cout << "You " << result << endl;
     
        cout << "Do you want to play again? (y/n): ";      
        cin>> play_again;
      
        // if user enter any other character other than y, the game ends
        if (play_again != 'y') {
            break;
        }
    }
 }