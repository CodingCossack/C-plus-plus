// Create a double type array named numbers with values: 3.5, 8.9, 1.6, -4.8.


#include <iostream>
using namespace std;

int main() {

    double numbers [4] = {3.5, 8.9, 1.6, -4.8};		// create double array

    for (int i = 0; i < 4; ++i) {				// access array using loop
        cout << numbers[i] << endl;
    }

    return 0;
}