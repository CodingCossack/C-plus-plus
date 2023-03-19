// Program to check if a person can vote or not based on the age.

#include <iostream>
using namespace std;

int main() {

    int age;                  // get input value for the age  
    cin >> age;

    if (age >= 18) {           // check if the age is greater than or equal to 18    
        cout << "Can Vote";
    }
    else {
        cout << "Cannot Vote";
    }

    return 0;
}








