// Program to check if a number is a self-dividing number.

#include <iostream>
using namespace std;

// function to check self dividing number
bool check_self_divide(int number) {
    int num = number;
    int digit;

    while (num !=0) {
        
        // access each digit of num
        digit = num % 10;
        
        // check if any digit doesn't divide the number
        // return 0, if true
        if (num % digit != 0) {
            return 0;
        }
        
        // change the value of num by using num / 10
        num /= 10;
    }
    
    // if all digit divides the number
    return 1;

}

int main() {

    int number;

    // get input value for number
    cin >> number; 

    // call check_self_divide() function
    bool result = check_self_divide(number);

    // check the returned value is 1
    if (result == 1) {
        cout << "Self Dividing Number";
    }
    else {
        cout << "Not a Self Dividing Number";
    }

    return 0;
}