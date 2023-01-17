//Program to check if number is odd or even

#include <iostream>
using namespace std;

int main() {

    int number;

    cin >> number;			// get integer input from the user

    if (number % 2 ==0) {	// check if number is even or odd
        cout << "even";
    }
    
    else {
        cout << "odd";
    }
    
    return 0;
}