// Program to override the same function in multiple classes.

#include <iostream>
using namespace std;

class Animal {
    public:    
    
        void display() {
            cout << "I am an animal" << endl;
        }
};

// inherit Dog class from Animal 
class Dog: public Animal {
    public:

        // override the display function 
        void display() {
            cout << "I am a dog" << endl;
        }
};

// inherit Cat class from Animal
class Cat: public Animal {
    public:
    
        // override the display function 
        void display() {
            cout << "I am a cat" << endl;
        }
};

int main() {
    
    // create objects of Dog and Cat
    Dog doggo;
    Cat kitty;

    // call display() using objects of Dog and Cat
    doggo.display();
    kitty.display();
    
    return 0;
}

