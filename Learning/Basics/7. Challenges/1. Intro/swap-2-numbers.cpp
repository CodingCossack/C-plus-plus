//swap two numbers without using a temp variable

#include <iostream>
using namespace std;

int main() {

    int number1, number2;

    cin >> number1 >> number2;

    number1 = number1 + number2;

    number2 = number1 - number2;

    number1 = number1 - number2;

    cout << number1 << endl;
    cout << number2;

    return 0;
}