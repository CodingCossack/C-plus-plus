// Program to overload a function with different types of parameters.

#include <iostream>
using namespace std;

// add() function with integer parameters
// add parameters and print the result
int add(int n1, int n2) {
    return n1 + n2;
}

// add() function with string parameters
// join parameters and print the result
string add(string str1, string str2) {
    return str1 + str2;
}

int main() {
    
        
    // get integer input for number1 and number2
    int number1, number2;
    cin >> number1 >> number2;

    // get string input for first and second
    string first, second;
    cin >> first >> second;

    // call add() with integer parameters
    int sum = add(number1, number2);
    cout << sum << endl;

    // call add() with string parameters
    string result = add(first, second);
    cout << result << endl;
        
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/