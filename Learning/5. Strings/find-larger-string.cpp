// Program to compare two strings based on their length.

#include <iostream>
using namespace std;

int main() {

    string text1, text2;

    // get string input
    getline(cin, text1);
    getline(cin, text2);

    // compare length of both strings
    // print the larger string
    if (text1.length() > text2.length()) {
        cout << text1;
    } 
    else {
        cout << text2;
    }

    return 0;
}