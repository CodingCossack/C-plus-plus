// Program to change string characters

#include <iostream>
using namespace std;

int main() {

    // assign "beer" to the alcohol string
    string alcohol = "beer";
        
    // change each character individually
    alcohol[0] = 'w';
    alcohol[1] = 'i';
    alcohol[2] = 'n';
    alcohol[3] = 'e';
    
    // print alcohol
    cout << alcohol;

    return 0;
}