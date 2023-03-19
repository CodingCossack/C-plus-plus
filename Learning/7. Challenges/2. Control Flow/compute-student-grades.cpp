// Program to find the grade of a student based on the marks.

#include <iostream>
using namespace std;

int main() {
    
    double marks;
    cin >> marks;			// get input value for marks

    if (marks >= 90) {				// check the value of marks and assign grade based on the value
        cout << "A";
    }
    else if (marks >= 80) {
        cout << "B";
    }
    else if (marks >= 70) {
        cout << "C";
    }
    else {
        cout << "D";
    }

    return 0;
}