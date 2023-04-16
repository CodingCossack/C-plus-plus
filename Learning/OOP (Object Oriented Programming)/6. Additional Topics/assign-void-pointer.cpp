// Program to find the sum of array elements using a void pointer.

#include <iostream>
using namespace std;

int main() {

    // create integer array
    int numbers[3] = {6, 12, 24};

    // initialize sum variable to 0
    int sum = 0;

    // use void pointer to point to sum variable    
    void* ptr = &sum;

    // assign address in ptr to integer pointer
    int* ptr_int = static_cast<int*>(ptr);
    
    // loop to iterate through the array
    for (int i = 0; i < 3; i++) {
        
        // add current array element to sum variable using ptr_int
        *ptr_int = numbers[i] + *ptr_int;
    }
    
    // print the sum using ptr_int
    cout << *ptr_int;

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