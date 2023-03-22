// Program to compute the area of a circle using a function.

#include <iostream>
using namespace std;

// create compute_area() function that accepts radius and pi as parameters
// computes the area and return it
double compute_area(double radius, double pi) {
    double area;
    area = pi * (radius * radius);
    return area;
}

int main() {
  
    double pi = 3.14;
    
    // get input value for radius
    double radius;
    cin >> radius;

    // call compute_area() with arguments radius and pi
    double area = compute_area(radius, pi);

    // print returned value
    cout << area;

    return 0;
}