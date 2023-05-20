// Program to convert a String to Uppercase

#include <iostream>
using namespace std;

int main() {

    string text;

    // get string input
    getline(cin, text);

    // loop to convert each character to uppercase using toupper()
    for (int i = 0; i < text.length(); i++) {
        text[i] = toupper(text[i]);
    }

    // print text
    cout << text;

    return 0;
}