// Program to count the Frequency of a Character in a String

#include <iostream>
using namespace std;

int main() {

    string text;
    char character;

    // get input for text and character
    cin >> text >> character;

    // variable to count the frequency
    int count = 0;

    // get length of text
    // use the length() function
    int length = text.length();

    // run a for loop to access each character of string
    // increment count by 1 if the string character is equal to input character
    for (int i = 0; i <= length; i++) {
        if (text[i] == character) {
            count += 1;
        }
    }

    // print count
    cout << count;

    return 0;
}