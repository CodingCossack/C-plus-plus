// Program to derive a Car class from the Vehicle class.

#include <iostream>
using namespace std;

// base class
class Vehicle {
    public:
   
        void get_features() {
            cout << "Initializing vehicle features" << endl;
        }
};

// derive Car from Vehicle
class Car: public Vehicle {};


int main() {
    
    // create object of Car
    Car car1;

    // call the get_feature() function of Vehicle class
    car1.get_features();

    return 0;
}
