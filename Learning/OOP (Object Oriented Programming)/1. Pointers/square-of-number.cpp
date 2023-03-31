// Program to find the square of a number using pointers.

#include <iostream>
using namespace std;

// function to find the square
void find_square(int* n) {

    // find the square by multiplying *n with *n
    int square = (*n) * (*n);

    // assign square to *n
    *n = square;
}

int main() {

    int number;
    cin >> number;

    // call function by passing address of number as argument
    find_square(&number);

    // print the value of number
    cout << number;

    return 0;
}