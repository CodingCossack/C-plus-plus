// Using a class template, create a program to find the average marks of a student.


#include <iostream>
using namespace std;

// create Student template
template <class T>
class Student {
    public:

        // create generic array
        T marks[2];

        // parameterized constructor to initialize marks array
        Student (T m[2]) {
            marks[0] = m[0];
            marks[1] = m[1];
        }

        // function to calculate average of marks
        T calculate_average() {

            T average = (marks[0] + marks[1]) / 2;
            return average;
        }
};

int main() {

    // create int and double arrays
    int marks_int[2];
    double marks_double[2];

    // get user input for int array
    cin >> marks_int[0] >> marks_int[1];

    // get user input for double array
    cin >> marks_double[0] >> marks_double[1];

    // create Student object for int data
    // pass marks_int[] as argument
    Student<int> student_int(marks_int);

    // create Student object for double data
    // pass marks_double[] as argument
    Student<double> student_double(marks_double);

    // call calculate_average() of student_int object
    int average_int = student_int.calculate_average();

    // call calculate_average() of student_double object
    double average_double = student_double.calculate_average();

    // print the averages
    cout << average_int << endl << average_double;

    return 0;
}

