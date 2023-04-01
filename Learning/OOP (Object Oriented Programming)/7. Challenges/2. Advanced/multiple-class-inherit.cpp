// Program where two classes inherit from a single class.

#include <iostream>
using namespace std;

class Polygon {
    public:
    
        void display() {
            cout << "A Polygon is created" << endl;
        }
};

// inherit Rectangle from Polygon
class Rectangle: public Polygon {
        
};

// inherit Triangle from Polygon
class Triangle: public Polygon {
        
};

int main() {
    
    // create object of the Rectangle class
    Rectangle rect;
        
    // access the function of Polygon using rect
    rect.display();
        
    // create object of the Triangle class
    Triangle tri;
        
    // access the function of Polygon using triangle
    tri.display();
    
    return 0;
}

