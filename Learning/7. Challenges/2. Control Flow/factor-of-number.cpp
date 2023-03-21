// Program to find the factors of a number.

#include <iostream>
using namespace std;

int main() {

    int number;								// get input value for number
    cin >> number;

    for (int i = 1; i < =number; i++) {		// run a loop from i = 1 to i < number
    
        if(number % i == 0) {				// check if number is divisible by i
          cout << i << endl;                // print values of i and new line
        }
    }

    return 0;
}