// Program to initialize a variable using a parameterized constructor.

#include <iostream>
using namespace std;

class Person {
    public:
        string name;

        // create constructor with string parameter named argument
        Person(string argument) {
            // assign argument to name 
            name = argument;
        }
};

int main() {

    // create Person object
    // pass "Michael Douglas" as argument to constructor
    Person person("Michael Douglas");

    // print name variable of person object
    cout << person.name;

    return 0;
}