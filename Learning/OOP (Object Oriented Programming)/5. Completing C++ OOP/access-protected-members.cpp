// Program to implement protected inheritance. Access the public and protected members of the parent class using an object of the child class.

#include <iostream>
using namespace std;

// parent class Person
class Person {
    protected:
        int marks;
    public:
        string name;
};

// inherit Student class from Person
// using protected inheritance
class Student: protected Person {
    public:

        // setter function for name
        void set_marks(int m) {
            marks = m;
        }
        
        // getter function for name
        int get_marks() {
            return marks;
        }

        // setter function for marks
        void set_name(string n) {
            name = n;
        }

        // getter function for marks
        string get_name() {
            return name;
        }
};

int main() {

    // create Student object
    Student student;

    // call set_name() function
    // pass "50 Cent" as argument
    student.set_name("50 Cent");

    // call set_marks() function
    // pass 97 as argument
    student.set_marks(50);

    // call getter function for name
    cout << student.get_name() << endl;

    // call getter function for marks
    cout << student.get_marks();

    return 0;
}

/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/