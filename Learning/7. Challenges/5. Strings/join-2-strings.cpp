// Program to join Two Strings Using append()

#include <iostream>
using namespace std;

int main() {

    string text1, text2;

    // take string inputs
    getline(cin, text1);
    getline(cin, text2);

    // join an empty space to text1
    text1.append(" ");

    // join text2 to text1
    text1.append(text2);

    // print text1
    cout << text1;

    return 0;
}