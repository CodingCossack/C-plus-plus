// Program to find all the prime numbers between two intervals using a function.

#include <iostream>
using namespace std;

// function that checks if a number is prime or not
bool check_prime(int number) {
    // check if number is less than or equal to 1
    if(number <= 1) return false;
    if(number == 2) return true;
    // check if number is divisible by any number less than or equal to square root of number
    for (int i = 2; i*i <= number; i++) {
        if (number % i == 0) {
            // return false if number is divisible by any other number
            return false;
        }
    }
    // return true if number is prime
    return true;
}

int main() {
    // get input values for x and y
    int x, y;
    cin >> x >> y;
    // run the loop from x to y
    // for each iteration of loop call check_prime()
    for (int i = x; i <= y; i++) {
       if(check_prime(i)) cout << i << "\n";
    }
    
    return 0;
}

