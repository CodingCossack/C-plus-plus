// Program to find the average marks of a student.

#include <iostream>
using namespace std;

// create Student struct with struct variable student1
struct Student {

    // create marks array
    int marks[3];

    // create average_marks() function
    double average_marks() {

        // initialize sum variable
        int sum = 0;

        // ranged for loop to calculate sum of marks
        for (int i : marks) {
            sum = sum + i;
        }

        // return the average
        return sum / 3.0;
    }
} student1;

int main() {

    // for loop to take user input for marks of student1
    for (int i = 0; i < 3; i++) {
        cin >> student1.marks[i];
    }

    // print the average by calling the function
    cout << student1.average_marks();

    return 0;
}


// A struct (structure) is a collection of variables (can be of different types) under a single name.