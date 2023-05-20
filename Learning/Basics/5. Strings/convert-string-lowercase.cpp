// Program to convert strings to lowe case

#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
 
    string text;
 
    cout << "ENTER A STRING IN UPPERCASE: ";
    getline(cin, text);
 
    // convert to lowercase
    for (int i = 0; i < text.length(); ++i) {
        text[i] = tolower(text[i]);
    }
 
    cout << "Lowercase = " << text << endl;
 
    return 0;
}