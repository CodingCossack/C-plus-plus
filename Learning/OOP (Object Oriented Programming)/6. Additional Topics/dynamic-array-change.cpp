// Program to decrease the size of an array dynamically.


#include <iostream>
using namespace std; 

int main() {

    // allocate space for marks1
    int* marks1 = new int[3];

    // get input value for marks1
    for (int i = 0; i < 3; ++i) {
        cin >> *(marks1 + i);
    }

    // print array elements
    for (int i = 0; i < 3; ++i) {
        cout << *(marks1 + i) << endl;
    }

    // allocate space for marks2
    int* marks2 = new int[2];

    // copy the first two elements of marks1 to marks2
    marks2[0] = marks1[0];
    marks2[1] = marks1[1];

    // deallocate marks1
    delete[] marks1;

    // print elements of marks2
    cout << endl << marks2[0] << endl;
    cout << marks2[1];
    
    // deallocate marks2
    delete[] marks2;

    return 0;
}


// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.