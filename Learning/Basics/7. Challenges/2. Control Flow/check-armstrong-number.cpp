// Program to check if a number is armstrong or not.

#include <iostream>
using namespace std;

int main() {
  
    int number, temporary, remainder;       // create variables       
    int result = 0;									
    cin >> number;                          // get input value for number

    temporary = number;                     // assign the value of number to temporary

    while (temporary != 0) {			// loop to find the cubes of each digit
        
        remainder = temporary % 10;					// use temporary % 10 to get the last digit
        result = result + (remainder * remainder * remainder);	// add the cube of the last digit to sum
        temporary = temporary / 10;				// temporary / 10 to change the value of temporary
    }

        if (result == number) {            // check if result is equal to number                        
        cout << "Armstrong";                // if it is, print "Armstrong"    
    }
    else {                                  // else, print "Not Armstrong"
        cout << "Not Armstrong";
    }

    return 0;
}