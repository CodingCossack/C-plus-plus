// Program to find the difference of two matrices using 2D arrays.

#include <iostream>
using namespace std;

int main() {

    // first matrix
    int A[3][2] = {
        {9, 8}, {12, 21}, {32, 36}
    };

    // second matrix
    int B[3][2] = {
        {4, 5}, {10, 12}, {20, 19}
    };

    // matrix to store the difference
    int difference[3][2];

    // use nested loop to find the difference
    for (int a = 0; a < 3; a++) {
        for (int b = 0; b < 2; b++) {
            difference[a][b] = A[a][b] - B[a][b];
        }
    }  

    // print the difference matrix
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            cout << difference[i][j] << ' ';
        }
        cout << endl;
    }

    return 0;
}
