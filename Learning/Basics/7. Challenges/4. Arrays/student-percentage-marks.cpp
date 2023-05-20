// Program to find the Percentage Marks Obtained by a Student

#include <iostream>
using namespace std;

int main() {

    double marks[4];

    // get input value for obtained marks
    for (int i = 0; i < 4; i++) {
        cin >> marks[i];
    }

    // initiialize total and obtained marks
    double total_marks = 400.0;
    double obtained_marks = 0.0;

    // find the sum of obtained marks
    for (int i = 0; i < 4; i++) {
        obtained_marks += marks[i];
    } 
  
    // find the percentage and print it
    double percentage = (obtained_marks / 400) * 100;
    cout << percentage;

    return 0;
}