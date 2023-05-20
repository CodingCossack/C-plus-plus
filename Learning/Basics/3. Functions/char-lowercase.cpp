// Create a program to convert a character to lowercase.

#include <iostream>
#include <cctype>		// toupper();tolower();isdigit(); etc.
using namespace std;
										
int main() {

    char alphabet;						// get character input
    cin >> alphabet;

    char lower = tolower(alphabet);		// convert alphabet to lowercase

    cout << lower; 						// print the character

    return 0;
}