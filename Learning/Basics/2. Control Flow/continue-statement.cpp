// Program to to print odd numbers between 1 and n, where n is a positive integer entered by the user.

#include <iostream>
using namespace std;

int main() {

    							
    int n;								// get integer input
    cin >> n;

    for (int i = 1; i <= n; ++i) {

        if (i % 2 == 0) {				// if i is even, skip printing of i
            continue;
        }

        cout << i << endl;				// print value of i
    }

    return 0;
}
