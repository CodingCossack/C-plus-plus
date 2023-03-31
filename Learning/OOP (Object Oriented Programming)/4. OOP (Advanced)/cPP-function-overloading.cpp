// Program to overload functions with different parameter types.

#include <iostream>
using namespace std;

// create Add class
class Add {
    public:

        // create add_number() function with int parameter num
        int add_number(int num) {

            // return the sum of num and 7
            int sum = num + 7;
            return sum;
        }

        // create add_number() function with char parameter alpha
        // return the sum of alpha and 7
        // return type of this function must be char
        int add_number(char alpha) {
            char result = alpha + 7;
            return result;
        }
};

int main() {

    // create object of Add class
    Add add1;

    // create variables
    int number;
    char alpha;

    // get integer and char input    
    cin >> number >> alpha;

    // call function with number as parameter
    int result1 = add1.add_number(number);

    // call function with alpha as parameter
    char result2 = add1.add_number(alpha);

    // print result1 and result2    
    cout << result1 << endl;
    cout << result2;
  
    return 0;
}