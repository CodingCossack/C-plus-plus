// Program to calculate the area of rectangles using constructor overloading.

#include<iostream>
using namespace std;

class Rectangle {
    public:

        // integer variables
        int length, breadth;
        
        // default constructor to initialize length to 8
        Rectangle() : length(8), breadth(8) {}
        
        // parameterized constructor to initialize length and breadth
        Rectangle(int l, int b) : length(l), breadth(b) {}
        
        // function to compute the area of rectangle
        int calculate_area() {
            return length * breadth;
        }
        // setter function to set the value of breadth
        void set_breadth(int b) {
            breadth = b;
        }
};

int main() {
    
    // get integer inputs
    int length, breadth;
    cin >> length >> breadth;
    
    // create an object of Rectangle rect1
    // pass length and breadth as arguments to constructor
    Rectangle rect1(length, breadth);
        
    // print area of rect1
    cout << rect1.calculate_area() << endl;
    
    // create rect2 object without any constructor parameters
    Rectangle rect2;
    
    // set the value of breadth using the set_breadth function
    rect2.set_breadth(breadth);
    
    // print area of rect2
    cout << rect2.calculate_area();
        
    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/