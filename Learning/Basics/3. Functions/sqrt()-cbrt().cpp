// Find the square root and cube root of a number.

#include <iostream>
#include <cmath>		// sqrt();cbrt();
using namespace std;
										
int main() {

    double number;							// get input for number
    cin >> number;

    double square_root = sqrt(number);		// find the square_root root and print it
    cout << square_root << endl;

    double cube_root = cbrt(number);		// find the cube_root root and print it
    cout << cube_root;

    return 0;
}
