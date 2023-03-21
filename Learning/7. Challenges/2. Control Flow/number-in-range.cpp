// Create a program to check if a given number falls in the given range.

#include <iostream>
using namespace std;

int main() {

    int number, range;				// create number and range variables
  
    cin >> number >> range;			// get input for number and range

    bool in_range = 0;				// create and initialize boolean variable to 0

    for (int i = 1; i <= range; ++i) {			// use for loop to check if number is within range
        
        if (number == i) {						// change in_range to 1 and break the loop if number is in range
            in_range = 1;
        }
    }
   
    if (in_range == 1) {					// use if...else to print appropriate output
        cout << "Within Range";
    }
    else {
        cout << "Out of Range";
    }


    return 0;
}