// Program to check if a number is an Abundant Number.

#include <iostream>
using namespace std;

int main() {
    
    int number;								// get input for number
    cin >> number;

    int sum = 0;							// variable to store sum of all divisors

    for (int i = 1; i < number; ++i) {		// run loop to find the divisor of number
        
        if (number % i == 0) {				// check if i is divisor of number
   
            sum = sum + i;					// if true, add i to sum
        }
    }

    if (sum > number) {						// check if sum is greater than number
        cout << "Abundant Number";
    } 
    else {
        cout << "Not an Abundant Number";
    }
    
    return 0;
}