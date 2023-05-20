// Program to print FizzBuzz based on user input.

#include <iostream>
using namespace std;

int main() {

    int number;									// get input value of number
    cin >> number;

    if (number % 3 == 0 && number % 5 == 0) {	// check if number is multiple of both 3 and 5
        cout << "FizzBuzz";
    }
    else if (number % 3 == 0) {					// check if number is multiple of 3
        cout << "Fizz";
    }
    else if (number % 5 == 0) {					// check if number is multiple of 5
        cout << "Buzz";
    }
    else {										// else print the value of number
        cout << number;
    }

    return 0;
}