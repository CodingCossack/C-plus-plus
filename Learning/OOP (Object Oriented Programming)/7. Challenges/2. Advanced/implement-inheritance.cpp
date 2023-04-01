// Program to implement implement inheritance.

#include <iostream>
using namespace std;

class Animal {
    public:
    
        // function to print statement
        void eat() {
            cout << "I can eat" << endl;
        }
};

// inherit a Dog class from Animal
class Dog: public Animal {
    public:
    
        // function inside the Dog
        void dance() {
            cout << "Dancing Dog" << endl;
        }
};

int main() {
    
    // create object of the Dog class
    Dog obj;

    // call the eat() function 
    obj.eat();

    // call the dance() function 
    obj.dance();
    
    return 0;
}

