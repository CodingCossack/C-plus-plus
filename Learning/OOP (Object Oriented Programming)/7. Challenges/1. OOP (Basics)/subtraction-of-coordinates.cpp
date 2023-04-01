// Program to subtract coordinates.

#include <iostream>
using namespace std;

class Coordinate {
    public:
  
        // variables to store coordinates
        int x, y;
    
        // constructor to initialize value of x and y
        Coordinate(int n1, int n2) {
            x = n1;
            y = n2;
        }
};


int main() {

    // get input values fo 4 coordinates
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;
        
    // create an object of Coordinate with arguments x1 and y1
    Coordinate c1(x1, y1);
        
    // create another object of Coordinate with arguments x2 and y2
    Coordinate c2(x2, y2);
        
    // subtract x coordinates of c1 and c2
    int x_diff = c1.x - c2.x;
        
    // subtract y coordinate of c1 and c2
    int y_diff = c1.y - c2.y;
        
    // print the result
    cout << x_diff << endl << y_diff;
    
    return 0; 
}