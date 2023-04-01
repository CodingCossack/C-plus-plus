// Program to add complex numbers using a friend function.


#include<iostream>
using namespace std;

class Complex_Number {
    public:
    
        // real and imag variables
        double real;
        double imag;
    
        // constructor to initialize value of real and imag
        Complex_Number(double r, double i) {
            real = r;
            imag = i;
        }
        
        // declare friend function
        // the function returns a Complex_Number object
        // it also has two Complex_Number objects as parameters
        friend Complex_Number add_complex(Complex_Number, Complex_Number);
};

// define the friend function
Complex_Number add_complex(Complex_Number obj1, Complex_Number obj2) {
    
    // create result object with arguments 0.0 and 0.0
    Complex_Number result(0.0, 0.0);
    
    // add real parts of obj1 and obj2
    result.real = obj1.real + obj2.real;
    
    // add imaginary parts of obj1 and obj2
    result.imag = obj2.imag + obj1.imag;
    
    // return the result object
    return result;
}

int main() {
    
    // get 4 input values
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
        
    // create c1 object of Complex_Number with arguments n1 and n2
    Complex_Number c1(n1, n2);
        
    // create c2 object of Complex_Number with arguments n3 and n4
    Complex_Number c2(n3, n4);
    
    // create result object with arguments 0.0 and 0.0
    Complex_Number result(0.0, 0.0);
    
    // call the add_complex() function with arguments c1 and c2
    // store the return value in result object
    result = add_complex(c1, c2);

    // print the output in the format real + imag_sumi
    cout << result.real << " + " << result.imag << "i";
    
    return 0;
}

