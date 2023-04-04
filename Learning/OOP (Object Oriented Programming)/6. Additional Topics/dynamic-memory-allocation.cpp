// Program to dynamically create a variable.

#include <iostream>
using namespace std;

int main() {

    // dynamically allocate memory to string variable name
    string* name = new string;

    // get user input for name
    getline(cin, *name);

    // print name
    cout << *name;

    // deallocate the memory
    delete name;

    return 0;
}


// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.