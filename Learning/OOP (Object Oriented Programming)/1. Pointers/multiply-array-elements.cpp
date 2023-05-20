// Program to multiply N to each element of the array.

#include <iostream>
using namespace std;

int main() {

    int prime_numbers[5] = {2, 3, 5, 7, 11};

    // get input value
    int number;
    cin >> number;

    // loop to multiply array
    for (int i = 0; i < 5; ++i) {

        // multiply each element of array by number using pointer notation
        prime_numbers[i] = *(prime_numbers + i) * number;
    }

    // print the updated array
    for (int i = 0; i < 5; ++i) {
        cout << prime_numbers[i] << endl;
    }

    return 0;
}





// If we don't know the data type of a variable that the pointer points to, it is known as a void pointer.
// It is also known as pointer to void.
//
// To dereference a void pointer, we first need to cast the void pointer to point to the specific type of data that we want to access.
// The syntax to type cast a void pointer is:
//
//      *(data_type*)pointer_variable
//
// For now, just remember this syntax for dereferencing void pointers using static_cast.
// syntax for dereferencing void pointer:
//
//      *static_cast<data_type*>(pointer_variable)