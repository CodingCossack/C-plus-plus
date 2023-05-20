// Program to print a multiplication table of a number.

#include <stdio.h>

int main() {
     
    int number;													// create a number variable
    cin >> number;										// take input value for number
  
    for (int i = 1; i < 6; i++) {            // for loop to run from 1 to 5
        cout << number * i << endl;         // print result of multiplication and print new line
    }

    return 0;
}						    
    						
    
