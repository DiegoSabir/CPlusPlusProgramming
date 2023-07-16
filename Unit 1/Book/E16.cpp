/**
 * Make a program that requests numeric notes and displays its equivalent in letters (A+,A,A-,B,C,D,F)
 * When finished, you should show the highest note in number and letter
 * If you want to exit (write -1).
 */

#include <iostream>
#include <string>
using namespace std;

void showGrades() {
    int numericGrade;
    int highestNumericGrade = 0;
    string grade = "";
    string highestGrade = "";

    do {
        cout << "Enter the numeric grade (or -1 to exit): ";
        cin >> numericGrade;

        if (numericGrade >= 0) {
            switch (numericGrade) {
                case 10:
                    grade = "A+";
                    break;
                case 9:
                    grade = "A";
                    break;
                case 8:
                    grade = "A-";
                    break;
                case 7:
                    grade = "B";
                    break;
                case 6:
                    grade = "C";
                    break;
                case 5:
                    grade = "D";
                    break;
                default:
                    grade = "F";
                    break;
            }

            cout << "Numeric grade: " << numericGrade << " | Letter grade: " << grade << endl;

            if (numericGrade > highestNumericGrade) {
                highestNumericGrade = numericGrade;
                highestGrade = grade;
            }
        }
    } 
    while (numericGrade != -1);

    cout << "The highest grade is " << highestNumericGrade << " | Letter grade: " << highestGrade << endl;
}

int main() {
    showGrades();
    return 0;
}