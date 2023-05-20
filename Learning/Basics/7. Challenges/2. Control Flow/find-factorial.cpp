// Program to find the factorial of a number.

#include <iostream>
using namespace std;

int main() {
  
    int number;
    cin >> number;					// get input value for number
    int factorial = 1;
   
    for (int i = 1; i <= number; i++) {		// run a for loop from i = 1 to i <= number
        factorial = factorial * i;			// inside loop multiply factorial with i
    }

    cout << factorial;				// print factorial

    return 0;
}