// Program to skip a specific number in a loop.


#include <iostream>
using namespace std;

int main() {

    int number;			// get integer input
    cin >> number;

    for (int i = 0; i <= 5; i++) {			// loop from 0 to 5

        if (i == number) {					// check if i is equal to number
            continue;						// skip the current iteration
        }

        cout << i << endl;				// print i
    }

    return 0;
}