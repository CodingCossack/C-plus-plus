// Create a function to find the product of two numbers.
// Using arguments and return values allows us to make a function independent piece of code.

#include <iostream>
using namespace std;
										
int get_product(int number1, int number2) {

    int product = number1 * number2;	// multiply number1 and number2

    return product;						// return the result
}

int main() {

    int n1, n2;							// get integer input from the user
    cin >> n1 >> n2;
    									// call the function with arguments n1 and n2
    int result = get_product(n1, n2);	// store the returned value in the result variable
    cout << result;

    return 0;
}
