// Program to calculate two numbers using a class template.

#include <iostream>
using namespace std;

// create class template Calculator
template <class T>
class Calculator {
    public:
    
        // create two variables of T type
        T num1, num2;
        
        // constructor to initialize variables
        Calculator( T n1, T n2) : num1(n1), num2(n2) {}
        
        // create calculator function
        // with char parameter and T return type
        T calculate(char op) {
            
            // return sum if op is '+'
            if (op == '+')
                return num1 + num2;
            
            // return product if op is '*'
            else if (op == '*')
                return num1 * num2;
            
            // return 0.0 for any other op value
            else
                return 0.0;
        }
};

int main() {
    
    // get user input for integer and double variables
    int n1, n2;
    double n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;
    
    // create Calculator object for integer type
    // pass n1 and n2 as arguments to constructor
    Calculator<int> obj1(n1, n2);
    
    // call calculate() for obj1 with '*' as argument
    int result1 = obj1.calculate('*');
    
    // create Calculator object for double type
    // pass n3 and n4 as arguments to constructor
    Calculator<double> obj2(n3, n4);
    
    // call calculate() for obj2 with '+' as argument
    double result2 = obj2.calculate('+');
    
    // print result1 and result2
    cout << result1 << endl << result2;
    
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/