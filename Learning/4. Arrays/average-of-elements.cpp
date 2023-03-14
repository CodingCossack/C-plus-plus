// Create a program to find the average of array elements.

#include <iostream>
using namespace std;

int main() {

    double numbers[5];
    
    for (int i = 0; i < 5; ++i) {		// get array input
        cin >> numbers[i];
    }

    double sum = 0.0;
    for (int i = 0; i < 5; ++i) {		// find the sum of all elements
        sum = sum + numbers[i];
    }

    double average = sum / 5;			// find the average and print it
    cout << average;

    return 0;
}