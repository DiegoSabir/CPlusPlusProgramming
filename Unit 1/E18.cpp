/**
 * Make a program that calculates the workers paycheck whose work is paid in hours.
 * The calculation is performed as follows:
 * - First 35 hours per month at a flat rate.
 * - Overtime is paid at 1.5 more than the flat rate.
 * - The taxes to be deducted from the workers vary:
 *   - If the monthly salary is less than $1000, the salary is tax-free.
 *   - Otherwise 20% will be counted in taxes.
 */

#include <iostream>
using namespace std;

double calculatePaycheck(int hours) {
    int extraHours;
    int fee = 30;
    double extraFee, salary, extraSalary, totalSalary;

    if (hours <= 35) {
        totalSalary = hours * 30;
    }
    else {
        extraHours = hours - 35;
        extraFee = fee * 1.5;
        salary = (35 * fee);
        extraSalary = extraFee * extraHours;
        totalSalary = salary + extraSalary;
    }

    double tax;
    if (totalSalary <= 1000) {
        tax = 0;
    }
    else {
        tax = totalSalary * 0.2;
        totalSalary -= tax;
    }
    return totalSalary;
}

int main() {
    cout << "Introduce the work's hours performed: ";
    int hours;
    cin >> hours;

    cout << "The net salary is $" << calculatePaycheck(hours) << endl;

    return 0;
}