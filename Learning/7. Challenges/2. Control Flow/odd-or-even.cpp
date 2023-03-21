// Program to check if a number is even or odd.

#include <iostream>
using namespace std;


int main() {
    
    int number;					// create the number variable
    cin >> number;		    // get input value for number
    
    if (number % 2 == 0) {		// check if the number is even or odd
        cout << "even";
    }
    else {
        cout << "odd";
    }
    
    return 0;
}