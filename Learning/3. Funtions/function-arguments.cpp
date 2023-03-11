// Create a function that adds two floating point numbers.

#include <iostream>
using namespace std;

void add_numbers(double n1, double n2) {	// function definition to take double argument

    double result = n1 + n2;				// add two arguments and print the result
    cout << result;
}

int main() {

    double number1;
    double number2;
    cin >> number1 >> number2;

    add_numbers(number1, number2);			// call function with argument number1 and number2

    return 0;
}