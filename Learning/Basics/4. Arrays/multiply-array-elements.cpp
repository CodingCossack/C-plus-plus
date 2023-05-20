// Create a program to multiply each element of an array by 10.

#include <iostream>
using namespace std;

int main() {

    int numbers[4] = {43, 78, 23, 45};		// an array of numbers	

    int new_numbers[4];					// declare new array of the same size

    for (int i = 0; i < 4; i++) {			// loop through each element of numbers and multiply them	
        new_numbers[i] = numbers[i] * 10;
    }
    
    for (int i = 0; i < 4; i++) {			// print the new array using another loop
        cout << new_numbers[i] << endl;
    } 

    return 0;
}