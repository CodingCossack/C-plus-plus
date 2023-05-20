// Program to find the bonus of employees based on their year of service.

#include <iostream>
using namespace std;

int main() {
  
    double salary;
    double serviceYear;
    double bonus;

    cin >> salary >> serviceYear;	// get input value for salary and serviceYear

    if (serviceYear > 5) {						// check if serviceYear is greater than 5
        
        bonus = (5 * salary) / 100;				// compute the bonus and print it
        cout << bonus;
    }

    return 0;
}