// Program to subtract two complex numbers.

#include <iostream>
using namespace std;

// struct creation
typedef struct Complex {
    double real;
    double imag;
} complex;

int main() {

    // create struct variables
    complex c1, c2, result;

    // get real and imag input for c1
    cin >> c1.real >> c1.imag;

    // get real and imag input for c2
    cin >> c2.real >> c2.imag;

    // subtract real and imaginary parts
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    
    cout << result.real << " + " << result.imag << "i";

    return 0;
}

// A struct (structure) is a collection of variables (can be of different types) under a single name.