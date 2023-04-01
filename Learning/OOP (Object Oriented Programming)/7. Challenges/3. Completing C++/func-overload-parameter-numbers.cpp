// Program to overload a function with different numbers of parameters.

#include <iostream>
using namespace std;

// add_numbers() function with 2 parameters
// add parameters and print the result
int add(int n1, int n2) {
    return n1 + n2;
}

// add_numbers() function with 4 parameters
// add parameters and print the result
int add(int n1, int n2, int n3, int n4) {
    return n1 + n2 + n3 + n4;
}

int main() {
    
    // get integer input
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    // call add_numbers() with n1 and n2 arguments
    int sum1 = add(n1, n2);
    cout << sum1 << endl;

    // call add_numbers() with n1, n2, n3, and n4 arguments
    int sum2 = add(n1, n2, n3, n4);
    cout << sum2 << endl;
        
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/