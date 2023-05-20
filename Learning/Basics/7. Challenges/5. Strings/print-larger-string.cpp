// Program to print the Longer String Between Two Strings

#include <iostream>
using namespace std;

int main() {

    // get input for text1 and text2
    string text1, text2;
    cin >> text1 >> text2;

    // compare the strings using if-else
    // use the length() function
    
    if (text1.length() > text2.length()) {
        cout << text1;
    }
    else {
        cout << text2;
    }

    return 0;
}