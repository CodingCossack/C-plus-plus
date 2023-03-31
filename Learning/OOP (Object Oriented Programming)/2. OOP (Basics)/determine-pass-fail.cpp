// Program to find the area of a triangle.

#include <iostream>
using namespace std;

class Student {
    public:

        // create marks array
        double papers[3] = {0.0, 0.0, 0.0};

        // create variables to store total and average marks
        double total_marks = 0.0;
        double average_marks = 0.0;

        // function to calculate the average
        void check_pass_fail() {

            // ranged loop to find total_marks
            for(double num : papers) {
                total_marks += num;
            }

            // calculate average_marks
            average_marks = total_marks / 3.0;

            // check if student passed or failed
            if (average_marks >= 40.0)
                cout << "pass" << endl;
            else
                cout << "fail" << endl;
        }
};

int main() {

    Student student;

    // get values for papers using ranged loop
    for(double &num : student.papers) {
        cin >> num;
    }

    // call the function 
    student.check_pass_fail();


    return 0;
}