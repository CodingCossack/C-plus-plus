//Program to check for smallest number

#include <iostream>
using namespace std;

int main() {

    int n1, n2, n3;

    cin >> n1 >> n2 >> n3;						// get input value for n1, n2, and n3

    bool result = (n2 < n1 && n2 < n3 == 1);	// prints 1 if n2 is the smallest number
	cout << result;								// prints 0 if n2 is not the smallest number		

   
    return 0;
}