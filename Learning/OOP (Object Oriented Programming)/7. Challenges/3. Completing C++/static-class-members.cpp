// Program to access the static variable and function from main() function.

#include <iostream>
using namespace std;

class College {
    public:
    
        // create a static variable
        static string name;
    
        // create a static function
        static void display() {
            cout << name << endl;
        }
};    

// define the static variable
string College::name;

int main() {
        
    // get string input
    string input_name;
    getline(cin, input_name);
        
    // initialize the static variable
    College::name = input_name;
        
    // call the static function
    College::display();
        
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/