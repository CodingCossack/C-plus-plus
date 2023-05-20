// Program to print odd numbers between odd and n


#include <iostream>
using namespace std;

int main() {

    int n;								// take input value for n
    cin >> n;

    for (int i = 1; i <= n; i++) {		// iterate from i = 1 to n (n should be inclusive)

   
        if (i % 2 != 0) {				// if i is an odd number, print it
            cout << i << endl;
        }
    }

    return 0;
}