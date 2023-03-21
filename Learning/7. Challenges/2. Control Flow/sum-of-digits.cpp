// Program to find the sum of all the digits of a number.

#include <iostream>
using namespace std;

int main() {

    int number;					// get input value for number
    cin >> number; 

    int num = number;			
    int digit;
    int sum = 0;

    while (num != 0) {			// run while loop to access each digit of number

         digit = num % 10;		// use num % 10 to find digit of each number

         sum = sum + digit;		// add each digit to sum
   
         num = num / 10;

    }
    cout << sum;			// print the sum

    return 0;
}