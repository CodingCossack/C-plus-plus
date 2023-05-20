// Program to find the average marks of a student.

#include <iostream>
#include <iomanip> // for fixed and setprecision
using namespace std;

constexpr int num_marks = 4; // Number of marks to be entered

int main() {

    double marks[num_marks]; // Array to store marks

    // Input marks
    for (double& mark : marks) {
        if (!(cin >> mark)) {
            cout << "Invalid input!\n";
            return 1;
        }
    }

    double sum = 0.0;
    // Find the sum of marks
    for (double mark : marks) {
        sum += mark;
    }

    // Calculate average 
    double average = sum / num_marks;

    // Display average with 2 decimal precision
    cout << fixed << setprecision(2) << "Average : " <<average <<endl;
    return 0;
}
