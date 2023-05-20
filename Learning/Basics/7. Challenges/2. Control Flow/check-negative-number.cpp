// Program to check if a number is negative or not.

#include <iostream>
using namespace std;

int main() {
  
    int number;							// create a variable and get input value
    cin >> number;
    
    if (number < 0) {					// check if the number is negative or positive or zero
        cout << "Negative Number";
    }
    
    else if (number > 0) {
        cout << "Positive Number";
    }
    
    else {
        cout << "Zero Number";
    }
    
    return 0;
}