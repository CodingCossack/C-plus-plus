// Program to display armstrong numbers between two intervals.

#include <iostream>
using namespace std;

// create a function that checks if a number is armstrong
// prints the number is it is an armstrong number
int check_armstrong(int number) {
    int original_number = number;
    int remainder = 0;
    int sum = 0;
    
    while(original_number != 0) {
        remainder = original_number % 10;
        sum += (remainder * remainder * remainder);
        original_number /= 10;
    }
    if (sum == number) {
        cout << number << "\n";
    }
        return 0;
    
}

int main() {
  
    // get input values for x and y
    int x, y;
    cin >> x >> y;

    // run loop from x to y
    // call check_armstrong() for each value from x
    while (x <= y) {
        check_armstrong(x);
        x += 1;   
    }
    
    return 0;
}
