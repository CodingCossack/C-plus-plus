// Program to find fatorial of integer
// do...while executes code at least once before checking condition

#include <iostream>
using namespace std;

int main() {

    int number, sum = 0;

    do {						// use do...while loop to take input and find sum
        cin >> number;			// run the loop until the user enters 0
        sum = sum + number;
    } while (number != 0);

    cout << sum;

    return 0;
}
