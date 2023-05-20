// Program to divide two floating point numbers using pointers.

#include <iostream>
using namespace std;

// function with two pointer parameters of double type
double divide_numbers(double* n1, double* n2) {
    
    // divide the values stored in n1 and n2
    double result = *n1 / *n2;
    
    // return the result variable
    return result;
}

int main() {

    double number1;
    double number2;
    
    // get double input for two variables
    cin >> number1 >> number2;
  
    // call function by passing addresses of number1 and number2
    double result = divide_numbers(&number1, &number2);
    
    // print the result
    cout << result;

    return 0;
}