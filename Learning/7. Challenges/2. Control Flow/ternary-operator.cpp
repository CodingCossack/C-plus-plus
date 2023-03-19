// Program to print the larger number among two numbers.

#include <iostream>
using namespace std;

int main() {

    // get two integer inputs
    int number1, number2;
    cin >> number1 >> number2;

    // compare number1 with number2 using Ternary Operator
    int larger = (number1 > number2) ? number1 : number2;

    // print the result
    cout << larger;

    return 0;
}
/*
Ternary operator should only
be used for single tasked
if/else statements
*/