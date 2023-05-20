// Program to print the value of a pointer

#include <iostream>
using namespace std;

int main() {

    // create a variable
    double number = 83.13;

    // create a pointer variable pt
    double* pt;

    // assign address to pointer
    pt = &number;
    
    // print pointer pt
    cout << pt;
        
    return 0;
}