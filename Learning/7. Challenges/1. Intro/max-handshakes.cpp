//Maximum possible handshakes from N number of students

#include <iostream>
using namespace std;

int main() {
    
    int students;
    int n = students;                   //more efficient to simplfy a variable 
                                        //that will be repeated in program
    cin >> n;

    int formula = (n * (n - 1)) / 2;    //combo formula for calculation
                                        //combination = (n * (n - 1)) / 2
                                        //n = total number of students
    
    cout << formula;
    
    return 0;
}                                               
