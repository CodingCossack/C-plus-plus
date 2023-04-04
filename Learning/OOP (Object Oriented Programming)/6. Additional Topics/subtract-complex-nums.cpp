// Program to subtract two complex numbers.

#include <iostream>
using namespace std;

class Complex {
    public:

        // variables to store real and imaginary part
        double real, imag;
        
        // constructor to initialize real and imag
        Complex(double r, double i) : real(r), imag(i) {}
};

Complex subtract_complex(Complex c1, Complex c2) {
    
    // create a new object of Complex
    // initial real and imag values are set to 0
    Complex result(0, 0);
    
    // subtract real parts of complex numbers
    result.real = c1.real - c2.real;
    
    // subtract imaginary pars of complex numbers
    result.imag = c1.imag - c2.imag;
    
    // return the result
    return result;
}

// function to print complex numbers
void print_complex(Complex c1) {
    cout << c1.real << " + " << c1.imag << "i" << endl;
}

int main() {

    // get input values for real and imag of two complex numbers
    double r1, r2, i1, i2;
    
    cin >> r1 >> i1 >> r2 >> i2;
    
    // create objects for two complex numbers
    // with real and imaginary values
    Complex c1(r1, i1);
    Complex c2(r2, i2);
    
    // object to store the addition
    // initial real and imag values are set to 0
    Complex difference(0, 0);
    
    // call the subtract_complex() function
    difference = subtract_complex(c1, c2);
    
    // call the print_complex() function
    print_complex(difference);
    
    return 0;
}