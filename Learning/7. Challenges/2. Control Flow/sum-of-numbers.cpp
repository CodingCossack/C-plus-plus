// Program to add numbers until the user enters 0.

#include <iostream>
using namespace std;

int main() {

    int number, sum = 0;

    do {
        cin >> number;
        sum = sum + number;
    } while (number != 0);

    cout << sum;

    return 0;
}