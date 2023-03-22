// Program to find LCM (Lowest Common Multiple) of two numbers using a function.

#include <iostream>
using namespace std;

// create function find_LCM() with parameters num1 and num2
// compute lcm of two values and return it
int find_LCM(int num1, int num2) {
    int lcm;
    if (num1 > num2) {						// int lcm = num1 > num2 ? num1 : num2; U Muppet
        lcm = num1;
    }
    else {
        lcm = num2;
    }
    
    while (1) {
        lcm += 1;
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
    }
    return lcm;
}

int main() {
  
    // get input value for x and y
    int x, y;
    cin >> x >> y;

    // call find_LCM() with arguments x and y
    int lcm = find_LCM(x, y);

    // print the returned value
    cout << lcm;
    
    return 0;
}