//Program to check if user is an adult

#include <iostream>
using namespace std;

int main() {

    int age;

    cin >> age;								// gets integer input

    if (age >= 18) {						// if age is 18 or above, print "The person can vote"
        cout << "The person can vote";		// if not, don't print anything
    }
    
    return 0;
}			