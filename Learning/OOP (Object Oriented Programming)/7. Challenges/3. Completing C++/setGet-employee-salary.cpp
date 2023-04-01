// Program to access and modify the salary of an employee using encapsulation.

#include <iostream>
using namespace std;

// create a class Employee
class Employee {
    
    // create a private variable
    private:
        double salary;

    public:

        // create a function to set salary
        void set_salary(double s) {
            salary = s;
        }

        // create a function to get salary
        double get_salary() {
            return salary;
        }
};

int main() {

    // get input value for the salary
    double salary;
    cin >> salary;

    // create an object of Employee
    Employee emp;

    // initialize the value of the salary variable using setter function
    emp.set_salary(salary);

    // get the value of the salary variable using the getter function
    double result = emp.get_salary();

    // print the salary
    cout << result;

    return 0;
}


/*

Protected members can only be accessed from within class or derived class

public members of the base class are inherited as public in the derived class
protected members of the base class remain protected in the derived class
private members of the base class are inaccessible to the derived class

*/