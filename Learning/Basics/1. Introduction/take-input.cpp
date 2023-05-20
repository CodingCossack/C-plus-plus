//program to find total income of a person

#include <iostream>
using namespace std;

int main() {
    
    double salary;
    double bonus;
    double income;

    cin >> salary;  //cin takes an input and stores it in address allocated to salary

    cin >> bonus;

    income = salary + bonus;

    cout << income;
  
    return 0;
}