// Program to print print both the ASCII value and character values of 'd'.

#include <iostream>
using namespace std;

int main() {

    // create char variable with value 'D'
    char alpha = 'D';

    // use tolower on alpha and print the result
    cout << tolower('D') << endl;

    // create char variable
    // assign tolower() value of 'D'
    char low_alpha = tolower('D');

    // print low_alpha
    cout << low_alpha;

    return 0;
}

/*
Ternary operator should only
be used for single tasked
if/else statements
*/