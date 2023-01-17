//Program to check if user is an adult and can vote

#include <iostream>
using namespace std;

int main() {
  
    int number1;
    int number2;

    cin >> number1;				// get inputs for number1 and number 2
    cin >> number2;

    if (number1 < number2) {	// if number1 is smaller than number2, print number1
        cout << number1;		// if not, print number2
    }
    
    else cout << number2;

    return 0;
}