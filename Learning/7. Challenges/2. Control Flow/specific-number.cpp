// Program to stop at a specific number in a loop.

#include <iostream>
using namespace std;

int main() {

    for (int i = 0; i <= 9; i++) {      // loop from i = 0 to 9

        if (i == 5) {               // break the loop if i is 5
            break;
        }
  
        cout << i << endl;          // print i
    }
  
  return 0;
}