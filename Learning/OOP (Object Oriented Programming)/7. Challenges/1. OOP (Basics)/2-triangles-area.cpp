// Program to find the area of two triangles.

#include<iostream>
using namespace std;

class Triangle {
    public:
    
        // integer variables
        int base;
        int height;
    
        // constructor of the class
        Triangle(int b, int h) {

            // initialize the value of base and height
            base = b;
            height = h;
        }
    
        // function to compute the area of triangle
        void calculate_area() {
            
            // calculate triangle area
            int area = (base * height) / 2;
            cout << area << endl;
        }
};

int main() {
    
        
    // create the first object of Triangle with parameters 5 and 14
    Triangle t1(5, 14);
        
    // call calculate_area() using the first object
    t1.calculate_area();
        
    // create the second object t2 of Triangle with arguments 12 and 32
    Triangle t2(12, 32);
        
    // call calculate_area() using the second object
    t2.calculate_area();
    
    return 0;
}