// Program to count the Number of Vowels

#include <iostream>
using namespace std;

int main() {

    // get string input
    string text;
    getline(cin, text);

    // variables to count vowels and store lowercase characters
    int vowels = 0;
    char character;

    // run a for loop to access each character of string
    for (int i = 0; i < text.length(); i++) {
    
        // use tolower() to convert each character of text to lowercase
        // store the result in the character variable
        character = tolower(text[i]);

        // check if character is a lowercase vowel using || operator
        // if true, increment the value of vowels by 1
        if (character == 'a' || character == 'e' || character == 'i' || character == 'o' || character == 'u') {
            vowels += 1;
        }

    }