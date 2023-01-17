//Program to check if number is divisible by 7

#include <iostream>
using namespace std;

int main() {

    int number;

    cin >> number; 

    bool result = (number % 7 == 0);
    cout << result;
  
    return 0;
}