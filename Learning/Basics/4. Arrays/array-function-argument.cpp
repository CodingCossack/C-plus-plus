// Create a program to find the average marks obtained by a student.

#include <iostream>
using namespace std;

double find_average(double marks[]) {		// function to find the average marks
    double sum = 0.0;

    for (int i = 0; i < 5; i++) {		// find the sum of all elements
        sum = sum + marks[i];
    } 

    double average = sum / 5;		// find the average

    return average;
}

int main() {

    double marks[5] = {54.8, 59.8, 48.7, 42.6, 60.1};

    double result = find_average(marks) ;		// call the function with marks as argument


    cout << result;

    return 0;
}