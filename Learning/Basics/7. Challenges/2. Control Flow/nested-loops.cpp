// Program to print '**' based on input using a nested loop.

#include <iostream>
using namespace std;

int main() {

    // get integer input
    int n;
    cin >> n;

    // outer loop iterates n times
    for (int i = 0; i < n; i++) {

        // inner loop iterates 2 times
        for (int j = 0; j < 2; j++) {
            cout << "*";
        }

        // print a new line
        cout << endl;

    }

    return 0;
}
