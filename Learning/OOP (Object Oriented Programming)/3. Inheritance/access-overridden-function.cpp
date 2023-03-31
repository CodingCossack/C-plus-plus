// Program to access the function of the parent class from the child class.

#include <iostream>
using namespace std;

// parent class
class Person {
    public:
        void speak() {
            cout << "I am a person." << endl;
        }
};

// create a Student class inheriting from Person
class Student: public Person {
    public:

        // override the speak() function
        void speak() {
            
            // access the speak() function of Person
            Person::speak();
            cout << "I am a student.";
        }
};

int main() {

    // create an object of the Student class
    Student student1;

    // call the speak function using student1
    student1.speak();
    
    return 0;
}


