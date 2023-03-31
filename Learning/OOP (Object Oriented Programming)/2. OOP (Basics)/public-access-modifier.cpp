// Program to access the public variable of a class from a function outside the class.

#include <iostream>
using namespace std;

// create Teacher class
class Teacher {
    public:
        string name = "Dr. Curtis Connors";
};

// create Student class
class Student {
    public:
        string name = "Peter Parker";
};

// create function
void display_names() {

    // create objects teacher and student
    // print name of both the objects
    Teacher teacher;
    Student student;
    cout << teacher.name << endl << student.name;
}

int main() {

    // call display_names() function
    display_names();

    return 0;
}