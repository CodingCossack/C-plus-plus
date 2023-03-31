// Program to demonstrate use of virtual function and an abstract class.

#include <iostream>
using namespace std;

// abstract class
class Polygon {
    public:
        // pure virtual function
        virtual double get_area() = 0;
};

class Rectangle: public Polygon {
    public:
        double length;
        double breadth;
        
        // initialize length and breadth
        Rectangle(double len, double bread) : length(len), breadth(bread) {}
        
        // implementation of the pure virtual function
        double get_area() {
            double area = length * breadth;
            return area;
        }
};

class Triangle : public Polygon {
    public:
        double base;
        double height;
        
        Triangle(double b, double h) : base(b), height(h) {}
        
        double get_area() {
            double area = 0.5 * base * height;
            return area;
        }
};

int main() {
    
    // create object of the child class
    Rectangle rectangle1(12.5, 8);
    Triangle triangle1(12.5, 8);
    
    // access the implemented pure virtual function
    double area = rectangle1.get_area();
    double area_tri = triangle1.get_area();

    cout << "Area of Rectangle: " << area << endl;
    cout << "Area of Triangle: " << area_tri;

    return 0;
}