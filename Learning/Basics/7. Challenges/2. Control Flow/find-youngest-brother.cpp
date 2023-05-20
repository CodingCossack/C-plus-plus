// Program to find the youngest brother among 3 based on their ages.

#include <iostream>
using namespace std;

int main() {
  
    int jack;
    int roman;
    int johnny;

    cin >> jack >> roman >> johnny;			// get age input for jack, roman and johnny

    if (jack < roman && jack < johnny) {				// use if else to find the youngest brother
        cout<< "Jack";
    }
    else if (roman < jack && roman < johnny) {
        cout<< "Roman";
    }
    else {
        cout<< "Johnny";
    }

    return 0;
}