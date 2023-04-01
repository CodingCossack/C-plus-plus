// Program to calculate the area of a rectangle with the help of static variables.


#include <iostream>
using namespace std;

class Rectangle {
    public:
 
        // create static variables of int type
        static int length;
        static int breadth;
};

// define the static variables
int Rectangle::length;
int Rectangle::breadth;

int main() {

    // get input for length and breadth of Rectangle
    cin >> Rectangle::length >> Rectangle::breadth;

    // calculate area of Rectangle
    int area = Rectangle::length * Rectangle::breadth;

    // print the area of the rectangle
    cout << area;

    return 0;
}

