// Program to check if a character is an alphabet or not.

#include <iostream>
using namespace std;

int main() {
  
    char alphabet;				// get character input
    cin >> alphabet;
    
    // check if character is in the range 'a' to 'z' or 'A' to 'Z'
    if ((alphabet >= 'a' && alphabet <= 'z') || (alphabet >= 'A' && alphabet <= 'Z')) {
        printf("Alphabet");
    }
    else {
        printf("Not Alphabet");
    }
    
    return 0;
}