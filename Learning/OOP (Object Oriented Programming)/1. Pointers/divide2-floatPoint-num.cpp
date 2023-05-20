// Program to multiply N to each element of the array.

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





// If we don't know the data type of a variable that the pointer points to, it is known as a void pointer.
// It is also known as pointer to void.
//
// To dereference a void pointer, we first need to cast the void pointer to point to the specific type of data that we want to access.
// The syntax to type cast a void pointer is:
//
//      *(data_type*)pointer_variable
//
// For now, just remember this syntax for dereferencing void pointers using static_cast.
// syntax for dereferencing void pointer:
//
//      *static_cast<data_type*>(pointer_variable)