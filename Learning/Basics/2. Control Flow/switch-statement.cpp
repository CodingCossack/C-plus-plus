// Program to find the name of the month.

#include <iostream>
using namespace std;

int main() {

    int month;
    cin >> month;

    switch (month) {

        case 1:						// cases to print each month based on month
            cout << "January";
            break;
            
        case 2:
            cout << "February";
            break;
        
        case 3:
            cout << "March";
            break;
    
        case 4:
            cout << "April";
            break;
    
        case 5:
            cout << "May";
            break;
    
        case 6:
            cout << "June";
            break;
    
        case 7:
            cout << "July";
            break;
    
        case 8:
            cout << "August";
            break;
    
        case 9:
            cout << "September";
            break;
    
        case 10:
            cout << "October";
            break;
    
        case 11:
            cout << "November";
            break;
    
        case 12:
            cout << "December";
            break;
        
        default:						// if any number other than 1-12 inputed default case executed
            cout << "Invalid Number";
    }

    return 0;
}