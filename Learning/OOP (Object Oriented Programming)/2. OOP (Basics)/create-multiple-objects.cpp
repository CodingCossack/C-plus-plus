// Program to create multiple objects from a single class.

#include <iostream>
using namespace std;

// create Student class with marks variable
class Student {
    public:
        
        int marks;
};

int main() {

    // create objects from Student class
    Student student1, student2;

    // get user input for marks of student1 and student2
    cin >> student1.marks >> student2.marks;

    // print marks of both objects
    cout << student1.marks << endl << student2.marks;

    return 0;
}