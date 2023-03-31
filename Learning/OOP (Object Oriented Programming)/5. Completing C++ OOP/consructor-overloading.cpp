// Program to overload two constructors.


#include <iostream>
using namespace std;

class Rectangle {
    public:
        double length;
        double breadth;

        // create constructor with no arguments
        // initialize length to 6.9 and breadth to 4.2
        Rectangle(): length(6.9), breadth(4.2) {}

        // create constructor with two double parameters
        // assign first parameter to length and second to breadth
        Rectangle(double l, double b) {
            length = l;
            breadth = b;
        }

        // create get_area() function
        // return the area of the rectangle
        double get_area() {
            return length * breadth;
        }
};

int main() {

    // get input for length and breadth    
    double length, breadth;
    cin >> length >> breadth;

    // create rect1 object with length and breadth as arguments
    Rectangle rect1(length, breadth);

    // print the area of rect1 by calling its get_area() function
    cout << rect1.get_area() << endl;

    // create rect2 object without passing any parameters
    Rectangle rect2;   

    // print the area of rect2 by calling its get_area() function
    cout << rect2.get_area();

    return 0;
}

