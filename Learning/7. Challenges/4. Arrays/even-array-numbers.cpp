// Program to get Even Numbers From an Array

#include <iostream>
using namespace std;

int main() {

    int numbers[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    int even_numbers[10];
  
    // variable to track position of even_numbers
    int j = 0;
  
    // run a for loop to access each element of numbers
    for (int i = 0; i < 10; ++i) {
      
        // check if each ith element of number is even
        // if true, add the element to the jth position of even_numbers
        // increase value of j by 1
        if (numbers[i] % 2 == 0) {
            even_numbers[j] = numbers[i];
            j += 1;
        }
    }

    // run a for loop from 0 to j to print even numbers
    for (int j = 0; j < even_numbers[j]; j++) {
        cout << even_numbers[j] << "\n";
    }
  
    return 0;
}