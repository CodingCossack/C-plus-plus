// Program to calculate simple interest using a function.

#include <iostream>
using namespace std;

// create a function that accepts principal, time, and rate as parameters
// compute the simple interest and return it.
double calculate_interest(double principal, double time, double rate) {
    double simple_interest;
    simple_interest = (principal * time * rate) / 100;
    return simple_interest;
}

int main() {

    // take input for principal, time, and rate
    double principal, time, rate;
    cin >> principal >> time >> rate;

    // call simple_interest() with arguments: principal, time and rate
    double interest = calculate_interest(principal, time, rate);

    // print simple interest
    cout << interest;

    return 0;
}