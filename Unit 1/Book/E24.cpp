/**
 * Make a program that calculates the tax discount on the workers' salary.
 * - If the worker has a salary of less than €1000, he will have a 10% discount.
 * - If the salary is greater than €1000 and less than €2000, he will have a 10% discount on the first €1000 and 5% on the rest.
 * - If it is greater than €2000, he will have a 10% discount on the first €1000, 5% on the next €1000 and 3% on the rest.
 */

#include <iostream>
using namespace std;

void calculateSalary(int salary) {
    double discount;
    if (salary <= 1000) {
        discount = salary * 0.1;
    }
    else {
        if (salary > 1000 && salary <= 2000) {
            discount = 1000 * 0.1 + (salary - 1000) * 0.05;
        }
        else {
            discount = 1000 * 0.1 + (salary - 1000) * 0.05 + (salary - 2000) * 0.03;
        }
    }
    cout << "Discount: " << discount << endl;
    cout << "Net salary: " << (salary - discount) << endl;
}

int main() {
    cout << "Introduce the salary: ";
    int salary;
    cin >> salary;

    calculateSalary(salary);

    return 0;
}