// Program to implement private inheritance.

#include <iostream>
using namespace std;

class Person {
    public:
        string name, address;
};

// derive class in private mode
class Employee : private Person {
    public:

        // constructor to initialize members of base class
        Employee(string n, string a) {
            name = n;
            address = a;
        }

        // getter function to return name
        string get_name() {
            return name;
        }
        
        // getter function to return address
        string get_address() {
            return address;
        }
};

int main() {

    // get string input
    string name, address;
    getline(cin, name);
    getline(cin, address);
    
    // create Employee object
    // pass name and address as arguments to constructor
    Employee emp1(name, address);

    // print employee name using getter function
    cout << emp1.get_name() << endl;
    
    // print employee address using getter function
    cout << emp1.get_address();

    return 0;
}