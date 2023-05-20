// Program to check if a number is palindrome or not.

#include <iostream>
using namespace std;

// function to find the reverse number
int find_reverse(int number) {
    int reversed = 0;
    int remainder;
    
    // run a while loop until number is equal to 0
    // inside the loop find the reverse of number
    // add last digit to reversed number using reversed * 10 + last digit
    while (number != 0) {
        remainder = number % 10;
        reversed = reversed * 10 + remainder;
        number /= 10;
    }

    return reversed;
}

int main() {
    
    int number;

    // get input value for number
    cin >> number; 

    // call find_reverse() with argument number
    int reverse = find_reverse(number);

    // check if number is equal to the returned value
    (reverse == number) ? puts("Palindrome Number") : puts("Not a Palindrome Number");

    return 0;
}