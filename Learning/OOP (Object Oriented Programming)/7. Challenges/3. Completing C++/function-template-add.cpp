// Program to program to add two numbers using function templates.

#include <iostream>
using namespace std;

// create function template to add two numbers
// template returns a value of T type
// template has two parameters num1 and num2 of T type
template <typename T>
T add_numbers(T num1, T num2) {
    return num1 + num2;
}

int main() {
    
    // get integer and double inputs
    int n1, n2;
    double n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    // call add_numbers() with arguments n1 and n2
    int sum_integer = add_numbers<int>(n1, n2);
    
    // call add_numbers() with arguments n3 and n4
    double sum_double = add_numbers<double>(n3, n4);
    
    // print the sums
    cout << sum_integer << endl << sum_double;
    
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/