// Create a program to print the first N numbers, i.e., from 1 to N.

#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    for (int i = 1; i <= number; i++) {         // use a for loop from i = 1 to number

        cout << i << endl;              // print i
    }

    return 0;
}