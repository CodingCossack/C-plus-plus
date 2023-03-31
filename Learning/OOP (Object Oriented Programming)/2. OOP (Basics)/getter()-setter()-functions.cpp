// Program to access the private variable of a class by using getter and setter functions.

#include <iostream>
using namespace std;

// create Square class
class Square {
    private:
        int length;

    public:

        // create setter function
        void set_length(int len) {
            length = len;
        }

        // create getter function
        int get_length() {
            return length;
        }
};

int main() {

    // create Square object
    Square square;

    // call setter function with argument 7
    square.set_length(7);

    // call getter function
    // store return value in side
    int side = square.get_length();

    // print the area of the square
    cout << side * side;

    return 0;
}