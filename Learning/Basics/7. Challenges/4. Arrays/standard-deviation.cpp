// Program to find the standard deviation.

#include <iostream>
#include <cmath>
using namespace std;

// function to compute standard deviation
double calculate_SD(double data[], int size) {
    double sum = 0.0;

    // find the sum of all the array elements
    for (int i = 0; i < size; i++) {
        sum += data[i];
    }

    // compute the mean
    double mean = sum / size;

    // find difference of each value and mean
    // compute the square of each difference
    // add all the squared difference
    double difference;
    double square_difference;
    double result;
    
     for (int i = 0; i < size; i++) {
         difference = mean - data[i];
         square_difference = (difference*difference);
         result += square_difference;
     }

    // compute variance by dividing the above result by 5
    double variance = result / size;

    // compute the standard deviation by
    // calculation the square root of variance 
    double SD = sqrt(variance);

    // return standard deviation
    return SD;
}

int main() {
  
    double numbers[5];
    int size = sizeof(numbers) / sizeof(numbers[0]);

    // get input array elements
    for (int i = 0; i < 5; i++) {
        cin >> numbers[i];
    }

    // call calculate_SD with arguments numbers
    // print the returned value
    double SD = calculate_SD(numbers, size);
    cout << SD;
    
  
    return 0;
}