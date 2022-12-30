//program to convert celcius to fahrenheit
#include <iostream>
using namespace std;
    
int main() {
    
    double celsius;
    double fahrenheit;

    cin >> celsius;

    fahrenheit = (celsius * 1.8) + 32;

    cout << fahrenheit;

   return 0;
}