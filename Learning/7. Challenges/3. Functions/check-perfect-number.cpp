// Program to check if a number is a Perfect Number.

#include <iostream>
using namespace std;

// function to find the sum of divisors
int find_sum(int number) {
    int sum = 0;

    // run a for loop to find the sum of all divisors
    for (int i = 1; i < number; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }

    return sum;
}

int main() {

    // get input value for number
    int number;
    cin >> number; 

    // call the find_sum() function with argument number
    int result = find_sum(number);

    // if result is equal to number, print Perfect Number. Otherwise, print Not a Perfect Number.
    (result == number) ? puts("Perfect Number") : puts("Not a Perfect Number");
    
    return 0;
}