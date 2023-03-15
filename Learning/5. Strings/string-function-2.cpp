// Program to extract the substring "Vegeta" from the string "Goku vs. Vegeta."

#include <iostream>
#include <string>
using namespace std;

int main() {

    // create a string with the value "Goku vs Vegeta."
    string text = "Goku vs. Vegeta."; 

    // extract the substring "Vegeta"
    string sub_string = text.substr(9, 6);

    cout << sub_string;

    return 0;
}