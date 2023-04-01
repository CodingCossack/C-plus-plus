// Program find the square of a number using a function template.


#include <iostream>
using namespace std;

// create get_square() template
// return the square of the parameter
template <typename N>
N get_square(N num) {
    return num * num;
}

int main() {

    // create int and float variables
    int number1;
    float number2;

    // get input for the variables
    cin >> number1 >> number2;

    // call get_square() with number1 as argument
    int square1 = get_square(number1);

    // call get_square() with number2 as argument
    float square2 = get_square(number2);

    // print the squares
    cout << square1 << endl << square2;

    return 0;
}

