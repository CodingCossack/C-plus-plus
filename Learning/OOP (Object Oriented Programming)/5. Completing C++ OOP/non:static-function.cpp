// Program to calculate the area of a rectangle using both static and non-static variables inside a non-static function.

#include <iostream>
using namespace std;

class Rectangle {
    public:
 
        // create static variable
        static int length;

        // create non-static variable
        int breadth;

        // create non-static function
        // return the area of the rectangle
        int calculate_area() {
            return length * breadth;
        }
};

// define the static variable
int Rectangle::length;

int main() {

    // create object
    Rectangle rectangle;

    // get input for length and breadth of Rectangle
    cin >> Rectangle::length >> rectangle.breadth;

    // call the calculate_area() function
    int area = rectangle.calculate_area();

    // print the area of the rectangle
    cout << area;

    return 0;
}

// :: -> scope resolution operator