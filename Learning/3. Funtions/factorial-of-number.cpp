// Create a function to compute the factorial of a number. 
// Local variables are important because they make functions independent.

#include <iostream>
using namespace std;
										
int compute_factorial(int n) {
    int factorial = 1;

    for (int i = 1; i <= n; i++) {	// compute factorial
        factorial = factorial * i;
    }

    return factorial; 				// return factorial
}

int main() {

    int number;						
    cin >> number;					// get user input

    int total = compute_factorial(number);
    cout << total;
    
    return 0;
}