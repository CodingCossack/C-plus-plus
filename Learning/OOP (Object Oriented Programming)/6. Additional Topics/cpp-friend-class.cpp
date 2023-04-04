// Program to access protected members of a class using a friend class.

#include <iostream>
using namespace std;

class Square {
    protected:

        int side;

        // declare friend class Area
        friend class Area;

    public:

        // constructor to initialize variable
        Square(int length): side(length) {}    
};

// friend class
class Area {
    public:

        // function to calculate area
        int find_area(int len) {

            // create Square object
            // pass len as argument to constructor
            Square square(len);

            // return the area of the square using the Square object
            return square.side * square.side;
        }
};

int main() {

    // get integer input for side variable
    int side;
    cin >> side;

    // create Area object
    Area area;

    // print the area by calling the find_area() function
    cout<< area.find_area(side);

    return 0;
}