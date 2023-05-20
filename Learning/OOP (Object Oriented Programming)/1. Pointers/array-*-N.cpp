// Program to multiply N to each element of the array.

#include <iostream>
using namespace std;

int main() {

    int prime_numbers[5] = {2, 3, 5, 7, 11};

    // get input value
    int number;
    cin >> number;

    // loop to multiply array
    for (int i = 0; i < 5; ++i) {

        // multiply each element of array by number using pointer notation
        *(prime_numbers + i) *= number; 
    }

    // print the updated array
    for (int i = 0; i < 5; ++i) {
        cout << *(prime_numbers + i) << endl;
    }

    return 0;
}