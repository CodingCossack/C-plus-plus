// Program to compute the area of rectangle and square.

#include <iostream>
using namespace std; 
        
// create Area class
class Area {
    public:

        // create function to calculate area of rectangle 
        void compute_area(int length , int breadth) {            
            int area = length * breadth;
            cout << area << endl;
        }

        // create function to calculate area of square         
        void compute_area(int length) {            
            int area = length * length;
            cout << area << endl;
        }
};

int main() {

    // create Area object
    Area area1;

    // get integer input for variables
    int rect_length, rect_breadth, square_length;
    cin >> rect_length >> rect_breadth >> square_length;

    // call compute_area() with arguments rect_length and rect_breadth 
    area1.compute_area(rect_length, rect_breadth);
    
    // call compute_area() with the square_length argument 
    area1.compute_area(square_length);

    return 0;
}