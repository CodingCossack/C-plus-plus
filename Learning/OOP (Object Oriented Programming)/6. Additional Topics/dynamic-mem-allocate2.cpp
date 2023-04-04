// Program to allocate memory to an array dynamically


#include <iostream>
using namespace std;

int main() {

    int n;

    // get input value for n
    cin >> n;

    // allocate memory to store n values in age pointer
    int* age = new int[n];
    
    // get input values for age
    for (int i = 0; i < n; i++) {
        cin >> *(age + i);
    }
 

    // print values
    for (int i = 0; i < n; ++i) {
        cout << *(age + i) << endl;
    }
    delete[] age;

    return 0;
}


// Dynamic memory allocation allows us to allocate memory after we run our program (during run-time)
// Delete operator To free the dynamically allocated memory.