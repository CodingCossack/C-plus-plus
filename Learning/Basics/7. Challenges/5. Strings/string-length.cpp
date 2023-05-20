// Program to anually Find the Length of a String

#include <iostream>
using namespace std;

int main() {

    // create text and count variables
    string text;
    int count = 0;
    
    // get string input using getline() function
    getline(cin, text);

    // run a for loop from i = 0 to text[i] != '\0'
    for (int i = 0; i < text.length() ; ++i) {
        
        // increase the value of count by 1
        count += 1;
    }

    // print the count
    cout << count;

    return 0;
}