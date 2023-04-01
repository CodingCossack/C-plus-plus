// Program to access and modify the private variable using getter and setter functions.

#include <iostream>
using namespace std;

class Student {
    private:
    
        // private variable
        string name;

    public:
    
        // setter function
        void set_name(string n) {

            cout << "Setting Name" << endl;

            // initialize value of name
            name = n;
        }

        // getter function
        string get_name() {

            cout << "Getting Name" << endl;

            // return the value of name
            return name;
        }
};

int main() {

    // get input value for name
    string name;
    getline(cin, name);

    // create an object of Student
    Student s1;

    // call setter function 
    s1.set_name(name);

    // call getter function
    string returned_value = s1.get_name();

    // print the returned value
    cout << returned_value;
        
    return 0;
}