// Program to demonstrate use of virtual function

#include <iostream>
using namespace std;

class Person {
    public:

        // create virtual function activity()
        // print "Human Activity"
        virtual void activity() {
            cout << "Human Activity";
        }
};

// derive Programmer class
class Programmer : public Person {
    public:

        // create overriding function activity()
        // print "Coding"
        void activity () {
            cout << "Coding";
        }  
};

int main() {

    // create Programmer object prog
    Programmer prog;

    // create Person pointer person
    // point to prog object
    Person* person = &prog;


    // call the activity() function using person
    person->activity();

  return 0;
}