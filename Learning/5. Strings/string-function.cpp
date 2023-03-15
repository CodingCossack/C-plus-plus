// Program to iterate through each character of a string.

#include <iostream>
#include <string>
using namespace std;

int main() {

    // create a string with value "C++ Programing"
    string text = "C++ Programming"; 

    // for loop to iterate through each character
    for (char i; i < text.length(); i++) {
        cout << text[i];
    }

    return 0;
}