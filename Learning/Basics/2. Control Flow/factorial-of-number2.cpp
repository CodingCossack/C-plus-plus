// Program to print numbers 5 to 1 using for loop
// for (initialization; boolean_expression; update)

#include <iostream>
using namespace std;

int main() {

    int n;								// take integer input
    cin >> n;

    int total = 1;						// the initial value of total is 1

    for (int i = 1; i <= n; i++) {		// run for loop from i = 1 to n
	
        total = total * i;				// multiply total and i in each iteration
    }

    cout << total;

    return 0;
}