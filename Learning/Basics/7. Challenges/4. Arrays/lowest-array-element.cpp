// Program to find the Lowest Element From the Array

#include <iostream>
using namespace std;

int main() {

    // create an integer array of size 5
    int numbers[5];

    // get input value for the array
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // create a variable lowest and assign first element of numbers to it
    int lowest = numbers[0]; 

    // run a for loop from i = 1 to i < 5
    // check if lowest is less than element at i
    for (int i = 0; i < 5; i++) {
        if (numbers[i] < lowest) {
            lowest = numbers[i];
        }
    }

    // print the lowest
    cout << lowest;

    return 0;
}