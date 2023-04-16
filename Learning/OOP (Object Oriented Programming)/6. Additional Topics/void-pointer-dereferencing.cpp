// Program to dereference a void pointer.

#include <iostream>
using namespace std;

int main() {

    // create integer and character variables
    int number = 666;
    char alphabet = 'd';
    
    // create void pointer
    // assign address of number to ptr
    void* ptr = &number;

    // print the value of number using ptr
    // HINT: use the syntax *(data_type*)pointer_variable
    cout << *static_cast<int*>(ptr) << endl;

    // reassign address of alphabet to ptr
    ptr = &alphabet;    
    
    // print the value of alphabet using ptr
    cout << *static_cast<char*>(ptr);

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