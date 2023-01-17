// Program to calculate the sum of integers entered by the user.
// If the user enters 0 or negative integer, terminate the loop and print the sum.


#include <iostream>
using namespace std;

int main() {

    int total = 0;					// initial value of total is 0		
    int number;

    while (1) {
 
        cin >> number;				// get an integer input
   
        if (number <= 0) {			// if input value is less than or equal to 0, break the loop
            break;
        }
        
        else {							// else add value to total
            total = total + number;
        }
    }

    cout << total;				    // print the total

    return 0;
}

