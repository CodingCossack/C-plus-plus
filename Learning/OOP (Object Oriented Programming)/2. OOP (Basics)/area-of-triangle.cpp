// Program to find the area of a triangle.

#include <iostream>
using namespace std;

class Triangle {    
    public:

        int base;
        int height;
        
        // constructor to initialize radius
        Triangle(int b, int h) : base(b), height(h) {}
  
        // calculate area
        double calculate_area() {
            double area = (base * height) / 2.0;
            return area;
        }
};

int main() {
    
    // get input values for base and height
    int base, height;
    cin >> base;
    cin >> height;

    // create object of Triangle with arguments: base and height
    Triangle triangle(base, height);
  
    // call the function to compute area
    double area = triangle.calculate_area();
    cout << area;

    return 0;
}