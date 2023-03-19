// Program to check if a year is a leap year or not.

#include <iostream>
using namespace std;

int main() {

    int year;										// get input value for year
    cin >> year;

    if (year % 400 == 0) {							// check if year is divisible by 400
        cout << "Leap year";
    }
    else if (year % 4 == 0 && year % 100 != 0) {	// check if the year is divisible by 4 and doesn't end with 00
        cout << "Leap year";
    }
    else {											// otherwise print Not a Leap Year
        cout << "Not leap year";
    }

    return 0;
}