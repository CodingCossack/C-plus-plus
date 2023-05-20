// Program to multiply the elements of an array.

#include <iostream>
using namespace std;

int main() {

    // get input for multiplier
    int multiplier;
    cin >> multiplier;

    // initialize array
    int numbers[4] = {4, 6, 8, 10};

    // use for loop from 0 to 3
    // multiply each array element by multiplier
    // then print the array element
    for (int i = 0; i < 4; i++) {
        cout << numbers[i] * multiplier << "\n";
    }

    return 0;
}