// Create a program to find the smallest element of the array.

#include <iostream>
using namespace std;

int find_smallest(int numbers[]) {		// function to find the smallest element
    
    int smallest = numbers[0];			// set smallest value to first array element
    
    for (int i = 0; i < 5; i++) {		
        if (numbers[i] < smallest) {	// if array value smaller than first element
            smallest = numbers[i];		// array value assigned to smallest value
        }
    }
    

    return smallest;				// returns smallest value
}

int main() {

    int numbers[5] = {55, 64, 45, 80, 65};		// an array of numbers

    int smallest = find_smallest(numbers); 		// call the function to find the smallest element

    cout << smallest;

    return 0;
}