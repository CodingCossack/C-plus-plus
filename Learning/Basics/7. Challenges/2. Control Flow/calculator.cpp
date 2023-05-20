// Program to create a two-value-input calculator.

#include <iostream>
using namespace std;

int main() {

    double number1 = 69.7;          // initialize operand variables
    double number2 = 36.2436;

    char operation;                 // get input for operation
    cin >> operation;

    switch (operation) {            // use switch case with operation
        
            case '+':                               // perform operations based on the value of op
                cout << number1 + number2;
                break;
            
            case '-':
                cout << number1 - number2;
                break;
            
            case '*':
                cout << number1 * number2;
                break;
            
            case '/':
                cout << number1 / number2;
                break;

        default:                                // if operation doesn't match with any of the cases
            cout << "Error!";
    }

    return 0;
}