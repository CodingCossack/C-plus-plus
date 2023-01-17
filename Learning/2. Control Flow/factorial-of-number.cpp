//Program to find fatorial of integer

#include <iostream>
using namespace std;

int main() {

    int n;							// get a number input
    cin >> n;

    int total = 1;					// initial value of total is 1
    int i = 1;

    if (n > 0) {					// qualifies for +ve integer
        while (i <= n) {			// find the factorial
            total = total * i;
            i = i + 1;
        }
    }

    else {							
    	cout << "Your integer must be positive";	// prints info of incorrect input
    }
   
    cout << total;

    return 0;
}