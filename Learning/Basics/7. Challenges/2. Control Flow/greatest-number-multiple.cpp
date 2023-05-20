// Program to print the greatest multiple of a number that is less than or equal to 250.

#include <iostream>
using namespace std;

int main() {

    int number;             // get integer input for number
    cin >> number;

    for (int i = 250; i >= 0; i--) {        // loop from i = 250 to i = 0 backwards
            
            if (i % number == 0) {          // check if i is divisible by number
                cout << i;
                break;
        }
    }
  
    return 0;
}