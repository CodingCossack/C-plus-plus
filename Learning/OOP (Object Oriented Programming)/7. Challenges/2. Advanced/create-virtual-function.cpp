// Program to create a virtual function.

#include <iostream>
using namespace std;

class Animal {
    public:
    
        // create virtual function
        virtual void introduce() {
            cout << "I am an animal." << endl;
        }
};

// inherit the Mammal class from Animal
class Mammal: public Animal {
    public:
    
        // function that overrides virtual function
        void introduce() override {
            cout << "I possess mammary glands." << endl;
        }
};

int main() {

    // create an object of Mammal
    Mammal mammal1;

    // create an Animal pointer that
    // stores the address of mammal object
    Animal* ani = &mammal1;

    // call introduce() function using animal pointer
    ani->introduce();

    return 0;
}

