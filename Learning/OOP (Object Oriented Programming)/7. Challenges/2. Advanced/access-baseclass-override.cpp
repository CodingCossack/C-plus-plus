// Program to access the overridden function of the Parent Class.

#include <iostream>
using namespace std;

class Animal {
    public:
    
        void display() {
            cout << "I am an animal" << endl;
        }
};

// inherits the Dog class from Animal
class Dog: public Animal {
    public:
    
        // override the display() function
        void display() {

            // call display() of superclass using the :: operator
            Animal::display();
            cout << "I am a dog" << endl;
        }
};

int main() {
    
    // create object of Dog
    Dog doggo;

    // call display() using object of Dog
    doggo.display();
    
    return 0;
}

