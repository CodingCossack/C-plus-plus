// Program to join a string and then ouput using for loop.

#include <iostream>
using namespace std;

int main() {

    string text1 = "Elden";
    string text2 = "Ring";

    // concatenate text1, empty space, and text2
    string game = text1 + " " + text2; 
    
    // iterate through the string from indexes 0 to game.length() - 1
    // print each character
    for(int i = 0; i <= game.length() - 1; i++) {
        cout << game[i];
    }

    return 0;
}