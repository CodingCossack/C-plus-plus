//program to divide apples between students

#include <iostream>
using namespace std;

int main() {

    int apple_number = 14;
    int student_number = 3;

    int each = apple_number / student_number;       //find how many apples each student gets
    cout << each << endl;

    int remain = apple_number % student_number;     //find remainder apples
    cout << remain;

    return 0;
}