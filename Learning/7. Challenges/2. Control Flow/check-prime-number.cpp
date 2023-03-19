// Program to check whether a number is prime or not.

#include <iostream>
using namespace std;

int main() {

    int count = 0;          // initialize count to 0
    int number;             
    cin >> number;          // get integer input for number

    for (int i = 1; i <= number; i++) {         // loop from i = 1 to number
        if (number % i == 0) {                 // if number is divisible by i, increase count by 1
            count = count + 1;
        }
    }

    if (count == 2) {       // print prime if count is 2
        cout << "prime";
    }
    else {                  // else print "not prime"
        cout << "not prime";
    }

    return 0;
}