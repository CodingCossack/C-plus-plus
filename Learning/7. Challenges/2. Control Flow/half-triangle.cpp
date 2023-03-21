// Program to print half triangle

#include <iostream>
using namespace std;

int main() {

    int num;                // get integer input
    cin >> num;
  
    for (int row = 1; row <= num; ++row) {      // loop from 1 to num  

        for (int column = 1; column <= row; ++column) {     // loop from 1 to row

            cout << "* ";           // print "* "
        }

        cout << endl;       // print a new line
    }

    return 0;
}