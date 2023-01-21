//Program to check if user is an adult and can vote

#include <iostream>
using namespace std;

int main() {

    int age;

    cin >> age;									// get age input from the user

    if (age >= 18) {							// if age is 18 or above, print: The person can vote
        cout << "The person can vote";			// if not, print: The person cannot vote
    }

    else cout << "The person cannot vote";
    
    return 0;
}	