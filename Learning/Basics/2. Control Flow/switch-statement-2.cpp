// Program to identify even and odd numbers between 1 and 10.

#include <iostream>
using namespace std;

int main() {

    int number;
    cin >> number;

    switch (number) {

        case 1:						// cases to print find odd number
        case 3:
        case 5:
        case 7:
        case 9:
            cout << "Odd Number";
            break;
        
        case 2:						// cases to find even number
        case 4:
        case 6:
        case 8:
        case 10:
            cout << "Even Number";
            break;

        default:
            cout << "Invalid Number";
    }

    return 0;
}