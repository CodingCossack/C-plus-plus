// Program to create a default constructor that prints a message.

#include <iostream>
using namespace std;

class Person {
    public:
        string name = "Marty McFly";

        // create constructor
        // print "Welcome " and name variable in the same line 
        Person() {
            cout << "Welcome " << name;
        }
};

int main() {

    // create Person object
    Person person;

    return 0;
}