// Program to find area of rectangle

#include <iostream>
using namespace std;

int main() {

    int length;
    int breadth;

    cin >> length >> breadth; 

    double area = length * breadth;     //rectangle area formula

    cout << area << endl;               //prints area and new line

    double perimeter = 2 * (length + breadth);      //perimiter of rectangle formula

    cout << perimeter;

    return 0;
}
