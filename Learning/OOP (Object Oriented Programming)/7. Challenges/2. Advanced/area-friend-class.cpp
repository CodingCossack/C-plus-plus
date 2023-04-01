// Program to find the areas of a triangle and a rectangle using a friend class.

#include <iostream>
using namespace std;

// create Triangle class
class Triangle {
    public:
        double base, height;
        
        // constructor to initialize base and height
        Triangle(double base, double height): base(base), height(height) {} 
        
        // declare friend class
        friend Triangle area(Triangle, Triangle);        
};

// create Rectangle class
class Rectangle {
    public:
        double length, breadth;
        
        // constructor to initialize length and breadth
        Rectangle(double length, double breadth): length(length), breadth(breadth) {}
        
        // declare friend class
        friend Rectangle area(Rectangle, Rectangle);
};

// define friend class
class Area {
    public:
    
        // function to calculate triangle area
        double get_triangle_area(Triangle triangle) {
            return 0.5 * triangle.base * triangle.height;
        }
        
        // function to calculate rectangle area
        double get_rectangle_area(Rectangle rectangle) {
            return rectangle.length * rectangle.breadth;
        }        
};

int main() {

    // get input for dimensions of triangle and rectangle
    double base, height, length, breadth;
    cin >> base >> height >> length >> breadth;

    // create Triangle object
    // pass base and height to constructor
    Triangle triangle(base, height);
  
    // create Rectangle object
    // pass length and breadth to constructor
    Rectangle rectangle(length, breadth);

    // create Area object
    Area area;
    
    // call get_triangle_area() function by passing triangle object
    double area_triangle = area.get_triangle_area(triangle);

    // call get_rectangle_area() function by passing rectangle object
    double area_rectangle = area.get_rectangle_area(rectangle);
    
    // print the areas
    cout << area_triangle << endl << area_rectangle;
    
    return 0;
}

