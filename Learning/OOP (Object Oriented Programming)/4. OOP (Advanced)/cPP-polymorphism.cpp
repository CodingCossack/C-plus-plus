// Program to demonstrate polymorphism.

#include <iostream>
using namespace std;

class Greeting {
    public:

        // create greet() function        
        void greet(string name) {
            cout << "Hello " << name << endl;
        }
};

class Local_Greeting: public Greeting {    
    public:

        // override the greet() function
        void greet(string name) {
            cout << "Namaste " << name << endl;
        }  
};

int main() {
    
    // take input for name
    string name;
    getline(cin, name);
    
    // create an object of Greeting class
    Greeting g1;
    
    // call the greet() function
    g1.greet(name);
    
    // create an object of Local_Greeting class
    Local_Greeting LG1;
    
    // call the greet() function
    LG1.greet(name);

    return 0;
}