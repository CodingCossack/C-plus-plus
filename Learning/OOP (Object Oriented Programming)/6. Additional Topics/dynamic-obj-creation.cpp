// Program to create an object dynamically by passing arguments to its constructor.

#include <iostream>
using namespace std;

class Rectangle {
    private:
    
        // create member variables
        double length, breadth;
    
    public:
        
        // constructor to initialize member variables
        Rectangle(double len, double brth) : length(len), breadth(brth) {}
   
        // function to calculate area of the rectangle
        // return the product of length and breadth  
        double calculate_area() {
            return length * breadth;
        }
        
        // function to calculate perimeter of the rectangle
        // add length and breadth and multiply the result by 2, then return the final value
        double calculate_perimeter() {
            return 2 * (length + breadth);
        }
};

int main() {
    
    // get user input for length and breadth
    double length, breadth;
    cin >> length >> breadth;
    
    // dynamically create Rectangle object
    // pass length and breadth as argument to constructor
    Rectangle* rectangle = new Rectangle(length, breadth);
    
    // get the area of rectangle
    double area = rectangle->calculate_area();
    
    // get the perimeter of rectangle
    double perimeter = rectangle->calculate_perimeter();
    
    // print area and perimeter
    cout << area << endl;
    cout << perimeter;

    // free the computer memory
    delete rectangle;

    return 0;
}


// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.