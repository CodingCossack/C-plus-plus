// Program to get user input for a member variable using an object.

#include <iostream>
using namespace std;

// create Student class
class Student {
    public:

        // create marks variable
        int marks;
};

int main() {

    // create student object from Student class
    Student student;

    // get user input for marks of student
    cin >> student.marks;

    // print marks of student
    cout << student.marks;

    return 0;
}