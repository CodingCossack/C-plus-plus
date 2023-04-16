// Program to accept the name and age of a person and use this information to print a greeting message.

#include <iostream>
using namespace std;

class Person {
    private:

        // create private variable
        string name;

    public:

        // constructor initialization list
        Person(string name): name(name) {}

        // setter function
        void set_name(string name) {

            // assign parameter name to member variable name
            this->name = name;
        }

        // getter function
        string get_name() {

            // return the member variable
            return this->name;
        }
};

int main() {

    // create Person object
    // pass "Ainz Ooal Gown" as argument to the constructor
    Person person("Ainz Ooal Gown");

    // print name variable of person
    // use the getter function
    cout << person.get_name() << endl;

    // change the name variable of person to "Momonga"
    // call the setter function
    person.set_name("Momonga");

    // print name variable of person
    // use the getter function
    cout << person.get_name();

    return 0;
}



// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.