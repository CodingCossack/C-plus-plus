// Program to demonstrating Abstract Class

#include <iostream>
using namespace std;

class Animal {
    public:
        // pure virtual function
        virtual void make_sound() = 0;
};

// inherit Dog from Animal
class Dog: public Animal {
    public:

        // implement the pure virtual function
        void make_sound() {
            cout << "Woof Woof";
        }
};

int main() {
    
    // create an object of Dog
    Dog dog1;
    
    // access the pure virtual funciton
    dog1.make_sound();
    
    return 0;
}