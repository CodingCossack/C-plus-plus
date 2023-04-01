// Program to to override the function of parent class.

#include <iostream>
using namespace std;

class Vehicle {
    public:
    
        void display_info() {
            cout << "Four Wheeler or Two Wheeler" << endl;
        }
};

// inherit the Car class from Vehicle
class Car: public Vehicle {
    public:
    
        // override the display_info() function 
        // print Cars are Four Wheeler
        void display_info() {
            cout << "Cars are Four Wheeler" << endl;
        }
};

int main() {

    // create an object of Car
    Car car1;

    // call the display_info() function
    car1.display_info();
    
    return 0;
}

