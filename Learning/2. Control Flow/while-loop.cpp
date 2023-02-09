// Program to continuously ask for integer input from the user using an infinite while loop.

#include <iostream>
using namespace std;

int main() {

    int number;

    while (1) {
        cin >> number;

        if (number > 0 && number < 100) {		// print if number is in the range of 1 and 100
            cout << number << endl;
        }
        
        else break;
    }

    return 0;
}