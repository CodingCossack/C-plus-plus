// Create a program to compute student grades.

#include <iostream>
using namespace std;

double get_average_score(double scores[5]) {		// find the average score and return it

    double sum = 0.0;

    for (int i = 0; i < 5; ++i) {				// find the sum
        sum = sum + scores[i];
    }

    double average = sum / 5.0;

    return average;
}

char compute_grade(double average_score) {			// compute grade and return it

    char grade;
  
    if (average_score >= 80.0) {
        grade = 'A';
    }
    else if (average_score >= 60.0) {
        grade = 'B';
    }
    else if (average_score >= 50.0) {
        grade = 'C';
    }
    else {
        grade = 'F';
    }

    return grade;
}

int main() {

    double scores[5] = {55, 64, 75, 80, 65};				// an array of scores

    double average_score = get_average_score(scores);			// get average score

    char grade = compute_grade(average_score);				// get grade

    cout << "Average Score: " << average_score << endl;
    cout << "Grade: " << grade;

    return 0;
}

Use a for loop and cin to get input scores and based on the input find the average score and grade.