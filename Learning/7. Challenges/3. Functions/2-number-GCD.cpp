// Program to find the GCD (Greatest Common Divisor) of two numbers using a function.

#include <iostream>
using namespace std;

// create function find_GCD with parameters: num1 and num2
// compute the gcd of two numbers and return it
int find_GCD(int num1, int num2) {
    int result;
    
    for (int i = num1; i > 0; i--) {
        for (int i = num2; i > 0; i--) {
            if (num1 % i == 0 && num2 % i == 0) {
                result = i;
                break;
            }
        }
    }
    return result;
}

int main() {
  
    // get input values for x and y
    int x, y;
    cin >> x >> y;

    // call find_GCD() with arguments x and y
    int gcd = find_GCD(x, y);

    // print the returned value
    cout << gcd;
    
    return 0;
}