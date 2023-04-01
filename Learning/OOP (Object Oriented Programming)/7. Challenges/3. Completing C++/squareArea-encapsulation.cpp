// Program to calculate the area of a square using encapsulation.

#include <iostream>
using namespace std;

// create a class named Square
class Square {
    
    // create a private variable
    private:
        int length;

    public:
    
        // setter function
        void set_length(int len) {

            // condition to check if len is greater than 0
            // if true, assign value of len to the private variable length
            // otherwise, print "Length of a square cannot be less than 0."
            // and set the length to 0
            if (len > 0) {
                length = len;
            }
            else {
                cout << "Length of a square cannot be less than 0." << endl;
                length = 0;
                // terminate the function if len is less than or equal to 0
                return;
            }
        }

        // create function to calculate area
        int calculate_area() {
            int area = length * length;
            return area;
        }
};

int main() {
    
    // get input value for length
    int length;
    cin >> length;

    // create an object of Square
    Square square1;

    // call the setter function with the length argument
    square1.set_length(length);

    // call the calculate_area() function
    int area = square1.calculate_area();

    // print the area
    cout << area;
    
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/