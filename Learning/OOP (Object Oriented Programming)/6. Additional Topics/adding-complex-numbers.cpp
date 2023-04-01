// Program to add two complex numbers using functions and objects.

#include <iostream>
using namespace std;

class Complex {
    public:

        // variables to store real and imaginary part
        double real, imag;
        
        // constructor to initialize real and imag
        Complex(double r, double i) : real(r), imag(i) {}
};

// function to add complex numbers
// takes two Complex objects as arguments
// returns a Complex object that contains the sum

Complex add_complex(Complex c1, Complex c2) {
    
    // create a new object of Complex
    // initial real and imag values are set to 0
    Complex result(0, 0);
    
    // add real parts of complex numbers
    result.real = c1.real + c2.real;
    
    // add imaginary parts of complex numbers
    result.imag = c1.imag + c2.imag;
    
    // return the result
    return result;
}

// function to print complex numbers
// takes an object of Complex as the parameter

void print_complex(Complex c1) {
    cout << c1.real << " + " << c1.imag << "i" << endl;
}

int main() {

    // create objects for two complex numbers
    // with real and imaginary values
    Complex c1(8, 2.4);
    Complex c2(6, 4.2);
    
    // object to store the addition
    // initial real and imag values are set to 0
    Complex sum(0, 0);
    
    // print complex numbers
    cout << "First Complex Number: ";
    print_complex(c1);
    
    cout << "Second Complex Number: ";
    print_complex(c2);
    
    // call the add_complex() function
    sum = add_complex(c1, c2);
    
    // print the resulting complex
    cout << "Resulting Complex Number: ";
    print_complex(sum);
    
    return 0;
}