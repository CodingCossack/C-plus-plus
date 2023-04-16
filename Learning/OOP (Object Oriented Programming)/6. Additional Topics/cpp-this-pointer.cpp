// Program to accept the name and age of a person and use this information to print a greeting message.

#include <iostream>
using namespace std;

class Person {
    public:

        // create member variables
        string name;
        int age;

        Person(string name, int age) {

            // use this pointer to initialize member variables
            this->name = name;
            this->age = age;
        }

        void greet() {

            // print the greeting string
            // use this pointer
            cout << "Hello, " << this->name << ". Your age is " << this->age << "." << endl;
        }
};

int main() {

    string name;
    int age;

    // get user input
    getline(cin, name);
    cin >> age;

    // create Person object
    // pass name and age as argument
    Person person(name, age);

    // call the greet() function
    person.greet();

    return 0;
}



// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.