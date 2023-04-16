// Program to nullify a dangling pointer.

#include <iostream>
using namespace std;

int main() {

    // dynamically create double variable ptr
    double* ptr = new double;

    // assign 7.856 to the dynamically created variable
    *ptr = 7.856;

    // print the value in the pointer by dereferencing it    
    cout << *ptr << endl;

    // deallocate the memory
    delete ptr;

    // nullify the dangling pointer
    ptr = nullptr;
    
    // print the address stored in the pointer
    cout << ptr;

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