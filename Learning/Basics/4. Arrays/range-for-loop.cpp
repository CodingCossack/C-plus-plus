// Create a program to find the average of array elements.

#include <iostream>
using namespace std;

int main() {
    
    double numbers[5] = {32.2, 43.5, 51.6, 11.3, 29.8};
    
    double sum = 0;
    
    for (double var : numbers) {		// find the sum of all array elements using range for loop
        sum = sum + var;
    }
    
    double average = sum / 5;    		// find the average number 
    cout << average;

    return 0;
}