// Program to find the multiplication table of an integer (entered by the user) from 6 to 9.

#include <iostream>
using namespace std;

int main() {

    int n;								// get integer input from the user
    cin >> n;

    int product;						// create product variable

    for (int i = 6; i <= 9; i++) {		// create multiplication table from 6 to 9
        
        product = n * i;
        
        cout << n << " * " << i << " = " << product << endl;

    }

    return 0;
}