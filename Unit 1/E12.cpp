/**
 * Make a program that calculates the arithmetic average of 5 exams of a subject introduced by keyboard.
 */

#include <iostream>
using namespace std;

float averageGrade(){
    float grade, result;
    float addition = 0;

    for (int i = 1; i <= 5; i++){
        cout << "Enter the grade: ";
        cin >> grade;

        addition += grade;
    }

    return result = addition / 5;
}

int main(){
    float average = averageGrade();

    cout << "Average grade: " << average << endl;

    return 0;
} 