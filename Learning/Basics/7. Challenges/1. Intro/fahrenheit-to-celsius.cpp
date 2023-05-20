// convert fahrenheit to celsius

#include <iostream>
using namespace std;

int main() {

    double celsius, fahrenheit;
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * (5.0/9.0);       //in c++ as we use double data type...
                                                    //...must specify decimal instead of (5/9)
    cout << celsius;

    return 0;
}