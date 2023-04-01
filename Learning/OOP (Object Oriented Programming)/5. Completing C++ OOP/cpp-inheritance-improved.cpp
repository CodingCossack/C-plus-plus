// Improved program to implement public inheritance. Access the public, protected, and private members of the parent class from the main() function

#include <iostream>
using namespace std;

// parent class Person
class Person {
    private:
        int id;

    protected:
        int marks;

    public:
        string name;

        // setter function for private variable id   
        void set_id(int x) {
            id = x;
        }

        // getter function for private variable id
        int get_id() {
            return id;
        }

        // setter function for protected variable marks
        void set_marks(int y) {
            marks = y;
        }

        // getter function for protected variable marks
        int get_marks() {
            return marks;
        }
};

// inherit Student class from Person
// using public inheritance
class Student: public Person {
};

int main() {

    // create Student object
    Student student;

    // initialize public variable name  
    student.name = "Tom Araya";

    // call setter function for id
    // pass 101 as argument
    student.set_id(101);

    // call setter function for marks
    // pass 97 as argument
    student.set_marks(97);

    // print student name
    cout << student.name << endl;

    // call getter functions for private and protected variables
    cout << student.get_id() << endl;
    cout << student.get_marks();

    return 0;
}

/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/