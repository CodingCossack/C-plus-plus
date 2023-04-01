// Program to check if the temperature is IcyHot.

#include <iostream>
using namespace std;

class Temperature {
    public:
    
        // variables to store temperatures
        int hot, cold;

        // constructor to initialize value of hot and cold
        Temperature(int h, int c) {
            hot = h;
            cold = c;
        }

        // function to check IcyHot temperature
        void check_icy_hot() {

            // check if hot is greater than 100 and cold is less than 0,
            // if true print IcyHot
            if (hot > 100 && cold < 0) {
                cout << "IcyHot";
            }
        }
};

int main() {
    
    // get input values for hot and cold temperature
    int hot, cold;
    cin >> hot >> cold;

    // create an object of Temperature with arguments hot and cold
    Temperature t1(hot, cold);

    // call check_icy_hot() using the object
    t1.check_icy_hot();

    return 0;
}
