// Program to find the sum of N natural numbers.

#include <iostream>
using namespace std;

int main() {

    int n;								// create a variable n
    
    int sum = 0;						// variable to store the value of sum
    
    cin >> n;					// take input value for n
    
    for (int i = 1; i <= n; ++i) {		// loop runs from 1 to n
        sum = i + sum;					// add i to sum
    }
    
    cout << sum << endl;					// print the value of sum
    
    return 0;
}