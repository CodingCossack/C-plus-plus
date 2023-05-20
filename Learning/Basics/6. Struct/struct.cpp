// Program to print a value from a struct.

#include <iostream>
using namespace std;

// create Employee struct
struct Employee {
    int age;
    string name;
};

int main() {

    // create struct variable
    struct Employee employee1;

    // get input value for employee1's name and age
    getline(cin, employee1.name);
    cin >> employee1.age;

    // print name and age
    cout << employee1.name << endl;
    cout << employee1.age;

    return 0;
}