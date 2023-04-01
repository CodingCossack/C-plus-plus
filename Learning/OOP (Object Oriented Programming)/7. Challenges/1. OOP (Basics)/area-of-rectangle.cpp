// Program to find the area of a rectangle.

#include<iostream>
using namespace std;

class Rectangle {
    public:

        // integer variables
        int length;
        int breadth;
    
        // function to compute the area of rectangle
        void calculate_area() {

            // calculate the area
            int area = length * breadth;
            cout << area << endl;
        }
};

int main() {
    
    // create an object of Rectangle
    Rectangle rect;
        
    // get input for length and breadth of the object
    cin >> rect.length >> rect.breadth;
    
    // call the calculate_area() function using the object
    rect.calculate_area();
        
    return 0;
}