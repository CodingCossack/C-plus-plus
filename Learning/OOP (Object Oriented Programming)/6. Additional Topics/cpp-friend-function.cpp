// Program to access the protected members of a class using a friend function.

#include <iostream>
using namespace std;

class Circle {
    protected:

        double radius;
        double pi = 3.14;
        
        // declare friend function find_circumference()
        // with double return type
        // and Circle parameter
        friend double find_circumference(Circle);

    public:

        // create constructor with double parameter rad
        // assign rad to radius variable
         Circle(double rad) : radius(rad) {}
};

// friend function definition
// Circle object named circle should be the parameter
double find_circumference(Circle circle) {
    
    // return circumference using the circle parameter
    return 2 * circle.pi * circle.radius;
}

int main() {

    // create radius variable and get user input
    double radius;
    cin >> radius;

    // create object named circle with radius as constructor parameter  
    Circle circle(radius);

    // print circumference
    // call find_circumference() by
    // passing circle as argument
    cout << find_circumference(circle);

  return 0;
}