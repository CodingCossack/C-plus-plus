// Program to implement hierarchical inheritance.

#include<iostream>
using namespace std;

class Person {
    public:
        void display_info() {
            cout << "I am a person." << endl;
        }
};

// inherit Student from Person and override display_info()
class Student: public Person {
    public:
        void display_info() {
            cout << "I am a student." << endl;
        }
};

// inherit Employee from Person and override display_info()
class Employee: public Person {
    public:
        void display_info() {
            cout << "I am an employee." << endl;
        }
};

int main() {
    
    // create objects of the Student and Employee classes
    Student student1;
    Employee employee1;
    
    // call display_info() using student1
    student1.display_info();
    
    // call display_info() using employee1
    employee1.display_info();
    
    return 0;
}
