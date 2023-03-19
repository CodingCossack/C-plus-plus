// Program to count the number of digits in an integer.

#include <iostream>
using namespace std;

int main() {
  
    int number;
    int count = 0;

    cin >> number;		// get input value for number

    while (number != 0) {		// loop through the integer to calculate the number of digits
        
        number = number / 10;
        count = count + 1;
        
        }

    cout << count;		// print the number of digits
    
    return 0;
}