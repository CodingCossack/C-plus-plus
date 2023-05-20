//Program to check wether number is positive, negative or zero

#include <iostream>
using namespace std;

int main() {

    int number;

    cin >> number;					// get integer input from the user

    if (number > 0) {				// check if number is positive, negative or zero
        cout << "positive";
    }
    else if (number < 0) {
        cout << "negative";
    }
    else {
        cout << "zero";
    }
    
    return 0;
}