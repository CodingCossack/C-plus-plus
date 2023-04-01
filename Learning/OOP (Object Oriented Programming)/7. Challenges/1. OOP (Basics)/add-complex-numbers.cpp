// Program to add complex numbers.

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
};

int main() {
    
    // get 4 input values
    double n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
        
    // create c1 object of Complex_Number with arguments n1 and n2
    Complex_Number c1(n1, n2);
        
    // create c2 object of Complex_Number with arguments n3 and n4
    Complex_Number c2(n3, n4);
        
    // add real part of c1 and c2
    double real_sum = c1.real + c2.real;
        
    // add imag part of c1 and c2
    double imag_sum = c1.imag + c2.imag;

    // print the output in the format real + imag_sumi
    cout << real_sum << " + " << imag_sum << "i";
    
    return 0;
}